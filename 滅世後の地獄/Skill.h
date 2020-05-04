class of_human{
    private:
        bool have[15];//2、3、5、10倍斩 暴击+ 闪避+ 攻击+ 防御+ 穿甲100% 混乱 命中- 恢复+(+) 毒+(+)
        int pay[15];
    public:
        bool judge(int n){return have[n];}
        int spent(int n){return pay[n];}
        void learn(int n){have[n]=1;}
};