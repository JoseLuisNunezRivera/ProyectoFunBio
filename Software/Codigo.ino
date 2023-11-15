int speedPin = 11;   // Pin para controlar la velocidad
int dirPin1 = 12;    // Primer pin para controlar la dirección
int dirPin2 = 13;    // Segundo pin para controlar la dirección
int speedMotor;      // Variable para almacenar la velocidad del motor 
int dt = 100;        // Intervalo de tiempo entre lecturas del sensor
int dt2 = 5000;      
int yPin = A1;       // Pin para leer el valor analógico de un sensor
int speedPin1 = 8;   // Pin para controlar la velocidad del motor 2
int dirPin3 = 7;    // Primer pin para controlar la dirección del motor 2
int dirPin4 = 6;    // Segundo pin para controlar la dirección del motor 2
int speedMotor1;      // Variable para almacenar la velocidad del motor 2
int dt1 = 100;        // Intervalo de tiempo entre lecturas del sensor
int dt3 = 5000;      
int yPin1 = A2;       // Pin para leer el valor analógico de un sensor         
int yVal;            // Variable para almacenar el valor leído del sensor

void setup() {
  // motor 1
  Serial.begin(9600);  // Inicializa la comunicación serial a 9600 baudios
  pinMode(speedPin, OUTPUT);  
  pinMode(dirPin1, OUTPUT);  
  pinMode(dirPin2, OUTPUT);  
  pinMode(yPin, INPUT);    // Configura yPin como entrada (para leer el sensor)
 
 // motor 2
  Serial.begin(9600);  // Inicializa la comunicación serial a 9600 baudios
  pinMode(speedPin1, OUTPUT);  
  pinMode(dirPin3, OUTPUT);  
  pinMode(dirPin4, OUTPUT);  
  pinMode(yPin1, INPUT);
}


void loop() {
  yVal = analogRead(yPin);  // Lee el valor analógico del sensor conectado a yPin
  Serial.println(yVal);    
  yVal = analogRead(yPin1);  // Lee el valor analógico del sensor conectado a yPin
  Serial.println(yVal); 

  // Por el momento se toman dos casos como prueba. Se planea plantear más casos. Se usa 100 como valor referncial de inicio.
  if (yVal > 100) {
    //Motor 1:
    speedMotor = map(yVal, 100, 1023, 0, 255);  // Mapea el valor leído al rango de 0 a 255 (Como ejemplo. Se planea colocar el segundo motor en proporción incial de 25 a 9)
    digitalWrite(dirPin1, 0);  // Configura dirPin1 en bajo (0)
    digitalWrite(dirPin2, 1);  // Configura dirPin2 en alto (1) (Girará en sentido antihorario)
    analogWrite(speedPin, speedMotor);  // Indica a que velocidad girará el motor
    //Motor 2:

    speedMotor1 = map(yVal, 100, 1023, 0, 255);  // Mapea el valor leído al rango de 0 a 255 (Como ejemplo. Se planea colocar el segundo motor en proporción incial de 25 a 9)
    digitalWrite(dirPin3, 0);  // Configura dirPin1 en bajo (0)
    digitalWrite(dirPin4, 1);  // Configura dirPin2 en alto (1) (Girará en sentido antihorario)
    analogWrite(speedPin1, speedMotor1);  // Indica a que velocidad girará el motor
  
  }

  if (yVal <= 100) {
    //Motor 1:
    speedMotor = map(yVal, 100, 0, 0, 255);  
    digitalWrite(dirPin1, 1);  // Configura dirPin1 en alto (1)
    digitalWrite(dirPin2, 0);  // Configura dirPin2 en bajo (0) (Girará en sentido horario)
    analogWrite(speedPin, speedMotor);  
    //Motor 2:
    speedMotor1 = map(yVal, 100, 0, 0, 255);  
    digitalWrite(dirPin3, 1);  // Configura dirPin1 en alto (1)
    digitalWrite(dirPin4, 0);  // Configura dirPin2 en bajo (0) (Girará en sentido horario)
    analogWrite(speedPin1, speedMotor1);
}
}