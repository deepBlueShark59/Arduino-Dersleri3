// #DERS3
//                                                    5 FARKLI FONKSİYONLU KİD PROJESİ

int ledler[] = {2,3,4,5,6,7,8,9};
int bekle= 50;//ledler için istediğimiz süreyi atıyoruz
int My=0;
int tur=3;
void setup() {
  for (int My=0; My<8; My++){ // yukarıdan sırası ile ledleri çağırıyoruz /// ledler[]
     pinMode(ledler[My],OUTPUT); //My değişkenine istediğimiz bir karakteri yazabiliriz.
  }

}

void loop() {
kid1();
kid2();
kid3();
kid4();
kid5();
}

void kid1(){
  for (int i=0; i<tur; i++){
        for ( My=0; My <8; My++) // 8 adet led sırası ile yanıyor sağa doğro
        {
        digitalWrite(ledler[My],HIGH);
        delay(150);
        }
        delay(100);
        for ( My=0; My <8; My++) // 8 adet led aynı anda sönüyor
        {
        digitalWrite(ledler[My],LOW);
        }
 //tersine       
        for ( My=7; My >-1; My--) // 8 adet led sırası ile yanıyor sola doğru
        {
        digitalWrite(ledler[My],HIGH);
        delay(150);
        }
        delay(100);
        for ( My=0; My <8; My++) // 8 adet led aynı anda sönüyor
        {
        digitalWrite(ledler[My],LOW);
        }
    }
 
 } 
void kid2(){
    for (int i=0; i<tur; i++){
        for ( My=0; My <8; My++) // 8 adet led sırası ile yanıyor sönüyor
        {
        digitalWrite(ledler[My],HIGH);
        delay(bekle);
        digitalWrite(ledler[My],LOW);
        }
   
        for ( My=7; My >-1; My--) // 8 adet led sırası ile yanıyor sönüyor geriye doğru
        {
        digitalWrite(ledler[My],HIGH);
        delay(bekle);
        digitalWrite(ledler[My],LOW);
        }
    }
 }
void kid3(){
    for (int i=0; i<tur; i++){
        for ( My=0; My <4; My++) // 8 adet led dıştan içe doğru yanıyor
        {
        digitalWrite(ledler[My],HIGH);
        digitalWrite(ledler[7-My],HIGH);
        delay(200);
        }

        for ( My=0; My <8; My++) // 8 adet led aynı anda sönüyor
        {
        digitalWrite(ledler[My],LOW);
        }
        delay(250);
    }
 
 }

void kid4(){
    for (int i=0; i<tur; i++){
        for ( My=0; My <4; My++) // 8 adet led dıştan içe doğru yanıyor
        {
        digitalWrite(ledler[3-My],HIGH);
        digitalWrite(ledler[4+My],HIGH);
        delay(200);
        }

        for ( My=0; My <8; My++) // 8 adet led aynı anda sönüyor
        {
        digitalWrite(ledler[My],LOW);
        }
        delay(250);
    }
 }
void kid5(){
    for (int i=0; i<tur; i++){
        for ( My=0; My <8; My++) // 8 adet led aynı anda yanıyor
        {
        digitalWrite(ledler[My],HIGH);
        }
        delay(100);
        for ( My=0; My <8; My++) // 8 adet led aynı anda sönüyor
        {
        digitalWrite(ledler[My],LOW);
        }
        delay(250);
    }
 }
