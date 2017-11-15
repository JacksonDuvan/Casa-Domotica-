//techo
int abrir_techo=22;
int cerrar_techo=23;
int abrir_techo1=24;
int cerrar_techo1=25;

//cortina
int abrir_cortina=26;
int cerrar_cortina=27;

//cortina1 
int abrir_cortina1=28;
int cerrar_cortina1=29;

//corina2
int abrir_cortina2=30;
int cerrar_cortina2=31;

//puerta
int abrir_puerta=32;
int cerrar_puerta=33;

int estado=0;

int sala = 14;
int cocina = 3;
int retrete = 6;
int cuarto = 34;
int cuarto1 = 38;
int cuarto2 = 36;
int retrete1  = 5;
int patio = 1;
int estudio = 4;

void setup() {
  Serial.begin(9600);
  pinMode(abrir_techo,OUTPUT);
  pinMode(cerrar_techo,OUTPUT);
  pinMode(abrir_techo1,OUTPUT);
  pinMode(cerrar_techo1,OUTPUT);

  pinMode(abrir_cortina,OUTPUT);
  pinMode(cerrar_cortina,OUTPUT);

  pinMode(abrir_cortina1,OUTPUT);
  pinMode(cerrar_cortina1,OUTPUT);

  pinMode(abrir_cortina2,OUTPUT);
  pinMode(cerrar_cortina2,OUTPUT);

  pinMode(abrir_puerta,OUTPUT);
  pinMode(cerrar_puerta,OUTPUT);

  pinMode(sala,OUTPUT);
  pinMode(cocina,OUTPUT);
  pinMode(retrete,OUTPUT);
  pinMode(cuarto,OUTPUT);
  pinMode(cuarto1,OUTPUT);
  pinMode(cuarto2,OUTPUT); 
  pinMode(retrete1,OUTPUT);
  pinMode(patio,OUTPUT);
  pinMode(estudio,OUTPUT);
  
}

void loop() {
 if(Serial.available()>0){
  estado = Serial.read();
  
  }
  //techo
  if(estado == '1'){
    digitalWrite(abrir_techo,HIGH);
    digitalWrite(abrir_techo1,HIGH);
    }
  if(estado == 'a'){
    digitalWrite(abrir_techo,LOW);
    digitalWrite(abrir_techo1,LOW);
    digitalWrite(cerrar_techo,LOW);
    digitalWrite(cerrar_techo1,LOW);
    }
  if(estado == '2'){
    digitalWrite(cerrar_techo,HIGH);
    digitalWrite(cerrar_techo1,HIGH);
    }

  // cortina  
  if(estado == '3'){
    digitalWrite(abrir_cortina,HIGH);
    }
  if(estado == 'b'){
    digitalWrite(abrir_cortina,LOW);
    digitalWrite(cerrar_cortina,LOW);
    }
  if(estado == '4'){
     digitalWrite(abrir_cortina,LOW);
     digitalWrite(cerrar_cortina,HIGH);
    }


  //cortina 1
  if(estado == '5'){
    digitalWrite(abrir_cortina1,HIGH);
    }
  if(estado == 'c'){
     digitalWrite(abrir_cortina1,LOW);
     digitalWrite(cerrar_cortina1,LOW);
    }  
  if(estado == '6'){
     digitalWrite(abrir_cortina1,LOW);
     digitalWrite(cerrar_cortina1,HIGH);
    }


  //cortina 2
  if(estado == '7'){
    digitalWrite(abrir_cortina2,HIGH);
    }
  if(estado == 'd'){
     digitalWrite(abrir_cortina2,LOW);
     digitalWrite(cerrar_cortina2,LOW);
    }
  if(estado == '8'){
     digitalWrite(abrir_cortina2,LOW);
     digitalWrite(cerrar_cortina2,HIGH);
    }


  //puerta
  if(estado == '9'){
     digitalWrite(abrir_puerta,HIGH);
    }
   if(estado == 'e'){
    digitalWrite(abrir_puerta,LOW);
    digitalWrite(cerrar_puerta,LOW);
    }
  if(estado == '0'){
    digitalWrite(abrir_puerta,LOW);
    digitalWrite(cerrar_puerta,HIGH);
    }

   //sala
   if(estado == 'f'){
    digitalWrite(sala,HIGH);
    }
   if(estado == 'g'){
    digitalWrite(sala,LOW);
    }
   //cocina
   if(estado == 'h'){
    digitalWrite(cocina,HIGH);
    }
   if(estado == 'i'){
    digitalWrite(cocina,LOW);
    }
   //baño
   if(estado == 'j'){
    digitalWrite(retrete,HIGH);
    }
   if(estado == 'k'){
    digitalWrite(retrete,LOW);
    }
   //cuarto
   if(estado == 'l'){
    digitalWrite(cuarto,HIGH);
    }
   if(estado == 'm'){
    digitalWrite(cuarto,LOW);
    }
   //cuarto1
   if(estado == 'n'){
    digitalWrite(cuarto1,HIGH);
    }
   if(estado == 'o'){
    digitalWrite(cuarto1,LOW);
    }
   //cuarto2
   if(estado == 'p'){
    digitalWrite(cuarto2,HIGH);
    }
   if(estado == 'q'){
    digitalWrite(cuarto2,LOW);
    }
   //baño2
   if(estado == 'r'){
    digitalWrite(retrete1,HIGH);
    }
   if(estado == 's'){
    digitalWrite(retrete1,LOW);
    }
   //patio
   if(estado == 't'){
    digitalWrite(patio,HIGH);
    }
   if(estado == 'u'){
    digitalWrite(patio,LOW);
    }
   //estudio
   if(estado == 'y'){
    digitalWrite(estudio,HIGH);
    }
   if(estado == 'z'){
    digitalWrite(estudio,LOW);
    }
   
   
}
