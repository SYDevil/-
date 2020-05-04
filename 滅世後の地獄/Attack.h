void hurt(One& x,int v,int K,One& y){
    if(is_rand(y.acc,y.acc+x.dodge))
        x.hp-=v-max(x.def-K,0);
}
bool poison(One& x,int v){
    if(rand()&1)return 0;
    x.debuff[7]+=v;
    return 1;
}
void 