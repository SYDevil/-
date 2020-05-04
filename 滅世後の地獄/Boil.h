class One{
    int hp,Max_hp;//生命值
    int mp,Max_mp;//气力值
    int def,att;//防御值 攻击力
    int buff[6],debuff[8];//buff(def+ att+ cri+ dod+ pie+ hp+)
                          //debuff(def- att- cri- dod- pie- acc- attack_wrong hp-)
    int crit,dodge,pierce,acc;//暴击 闪避 穿甲 命中
    public:
        One(int Mhp,int Mmp,int de,int at,double cr,double dod,double pie,double ac){
            hp=Max_hp=Mhp;mp=Max_mp=Mmp;def=de;
            att=at;crit=cr;dodge=dod;pierce=pie;acc=ac;
        }
        void hp_ad(int n){Max_hp+=n;}
        void mp_ad(int n){Max_mp+=n;}
        void def_ad(int n){def+=n;}
        void att_ad(int n){att+=n;}
        void crit_ad(int n){crit+=n;}
        void dodge_ad(int n){dodge+=n;}
        void pierce_ad(int n){pierce+=n;}
        void acc_ad(int n){acc+=n;}
        void injured(int n){hp=max(0,hp-n);}
        void poison(){
            if(debuff[7])injured(debuff[7]),debuff[7]>>=1;
        }
        void add(int n){
            hp=min(Max_hp,hp+n);
        }
        void restore(int n){
            if(buff[5])injured(buff[5]),buff[5]>>=1;
        }
        bool dead(){return hp<=0;}
        void add_up_debuff(int n,int v){
            debuff[n]+=v;
        }
        void add_to_debuff(int n,int v){
            debuff[n]=v;
        }
        void add_up_buff(int n,int v){
            buff[n]+=v;
        }
        void add_to_buff(int n,int v){
            buff[n]=v;
        }
};