#define STANDBY 15
#define NSERVOS 20

Servo servs[NSERVOS];

//Right Hand
#define Rwrist 2
enum RDedos {Rpinky=3, Ranular, Rmayor, Rindice, Rpulgar};

//Left Hand
#define Lwrist 14
enum LDedos {Lpinky=15, Lanular, Lmayor, Lindice, Lpulgar};

void attachServos(){
    servs[Rwrist].attach(Rwrist);
    servs[Lwrist].attach(Lwrist);
    servs[Rpinky].attach(Rpinky);
    servs[Lpinky].attach(Lpinky);
    servs[Ranular].attach(Ranular);
    servs[Lanular].attach(Lanular);
    servs[Rmayor].attach(Rmayor);
    servs[Lmayor].attach(Lmayor);
    servs[Rindice].attach(Rindice);
    servs[Lindice].attach(Lindice);
    servs[Rpulgar].attach(Rpulgar);
    servs[Lpulgar].attach(Lpulgar);
    return;
}


//180 abre 0 cierra
//1 abrir  0 cerrar (move_index)