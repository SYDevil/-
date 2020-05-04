class Me{
    # define Upconst 1.4
    int exp,Nexp,level,cnt;
    One x;
    of_human y;
    armor z;
    arms w;
    bool type;
    public:
        void up(){
            while(exp>=Nexp){
                exp-=Nexp;
                level++;
                x.hp_ad(level*4.2);
                x.mp_ad(level*5.3);
                x.att_ad(level*1.8);
                x.def_ad(level*2.1);
                x.crit_ad(1)
                x.pierce_ad(level*3)
                x.dodge_ad(level*2);
                x.acc_ad(level*2);
                Nexp*=Upconst
            }
        }
        void learn(int n){
            y.learn(n);
        }
}