class Alarm{
  int onkapiPin=0;
  int arkaKapiPin=0;
    public:
      Alarm(int p1,int p2){
        onkapiPin=p1;
        arkaKapiPin=p2;
      }
      void setup(){
        pinMode(onkapiPin,OUTPUT);
        pinMode(arkaKapiPin,OUTPUT);
      }
      void komut(String k){
        if(k=="onkapi") onKapi();
        if(k=="arkakapi") arkaKapi();
        if(k=="sustur") sustur();
      }
      
    private:
    void onKapi(){
      digitalWrite(onkapiPin,HIGH);
    }
    void arkaKapi(){
      digitalWrite(arkaKapiPin,HIGH);
    }
    void sustur(){
      digitalWrite(onkapiPin,LOW);
      digitalWrite(arkaKapiPin,LOW);
    }
  
};
