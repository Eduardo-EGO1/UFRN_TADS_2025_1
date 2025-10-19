

let canvas = document.getElementById("canvas");
let ctx = canvas.getContext("2d");

canvas.width = innerWidth;
canvas.height = innerHeight;

const gravidade = 1;

class Player {
  constructor() {
    this.position = {
      x: 100,
      y: 30,
    };
    this.size = {
      width: 30,
      height: 60,
    };
    this.velocity = {
      x: 0,
      y: 0,
    };
    this.color = "red";
  }
  draw() {
    ctx.fillStyle = this.color;
    ctx.fillRect(
      this.position.x,
      this.position.y,
      this.size.width,
      this.size.height
    );
  }
  update() {
    this.draw();
    this.position.y += this.velocity.y;
    this.position.x += this.velocity.x;

    if (this.position.y + this.size.height + this.velocity.y <= canvas.height) {
      //Tem que fazer essa soma pra que ele possa "prever" o próximo frame e não estourar a altura
      this.velocity.y += gravidade;
    } else {
      this.velocity.y = 0;
    }
  }
}

class Platform {
  constructor() {
    this.position = {
      x: 400,
      y: 500,
    }
    this.size = {
      width: 200,
      height: 20,
    }
  }
  draw() {
    ctx.fillStyle = 'blue'
    ctx.fillRect(this.position.x, this.position.y, this.size.width, this.size.height)
  }
}


const platform = new Platform()
let p1 = new Player();

const keys = {
  right: {
    pressed: false,
  },
  left: {
    pressed: false,
  },
  up: {
    pressed: false,
  },
};

function animate() {
  requestAnimationFrame(animate);
  ctx.clearRect(0, 0, canvas.width, canvas.height);
  p1.update();
  platform.draw();
  if (keys.right.pressed) { //Criando animação de acordo com a key pressionada (event listener abaixo)
    p1.velocity.x = 5;
  }
  else if (keys.left.pressed) {
    p1.velocity.x = -5;
  } else p1.velocity.x = 0;
  if (keys.up.pressed) {
    p1.velocity.y -= 2;
  }
  // CONDICIONAL PRA VERIFICAR O PONTO DE COLISÃO ENTRE O PLAYER E A PLATAFORMA, PRIMEIRO VERIFICA SE A ALTURA DO PLAYER
  //ESTÁ MAIOR OU IGUAL A PLATAFORMA (NO CASO O Y <=), PRECISA DA SEGUNDA CONDICIONAL (&&), SENÃO O PLAYER NUNCA IRIA PISAR NO CHÃO..
  //NA SEGUNDA CONDICIONAL PRECISA CONTAR COM A VELOCIDADE, PARA PREVER O PONTO FUTURO, ASSIM ISSO SÓ VAI SER VERDADEIRO MUITO PRÓXIMO DE TOCAR/TOCANDO O TOPO DA PLATAFORMA
  //NA TERCEIRA CONDICIONAL (&&) PRECISAMOS VERIFICAR O EIXO X, PARA QUE SOMENTE AO SAIR DO COMPRIMENTO DIREITO DA PLATAFORMA (POSIÇÃO + LARGURA DA PLATAFORMA), O PLAYER VOLTE A CAIR
  //NA ULTIMA CONDICIONAL, O PONTO DIREITO DO PLAYER (POSIÇÃO + LARGURA) DEVE SER MAIOR OU IGUAL AO PONTO ESQUERDO DA PLATAFORMA (POSIÇÃO), PARA QUE SOMENTE AO PASSAR ESSE EIXO, O PLAYER VOLTE A CAIR
  if ((p1.position.y + p1.size.height <= platform.position.y) && (p1.position.y + p1.velocity.y + p1.size.height >= platform.position.y) &&
    (p1.position.x <= platform.size.width + platform.position.x) && (p1.position.x + p1.size.width >= platform.position.x)) {
    p1.velocity.y = 0;
  }
}

document.addEventListener("keyup", (Key) => { //Event Listener ao soltar o botão, para impedir que o player continue se movendo
  if (Key.code == "KeyW" || Key.code == "Space") { //Ainda não consegui fazer ele parar de dar double jump/jump infinito
    keys.up.pressed = false;
  } else if (Key.code == "KeyD" || Key.code == "ArrowRight") {
    keys.right.pressed = false;
  } else if (Key.code == "KeyA" || Key.code == "ArrowLeft") {
    keys.left.pressed = false;
  }
});

document.addEventListener("keydown", (Key) => {
  if (Key.code == "KeyW" || Key.code == "Space") {
    keys.up.pressed = true;
  } else if (Key.code == "KeyD" || Key.code == "ArrowRight") {
    keys.right.pressed = true;
  } else if (Key.code == "KeyA" || Key.code == "ArrowLeft") {
    keys.left.pressed = true;
  }
});

animate();
