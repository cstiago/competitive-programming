namespace algorithms {

    template<typename T>
    T gcd(T a, T b) {
        a = a >= 0 ? a : -a;
        b = b >= 0 ? b : -b;

        if(b == 0) {
            return a;
        }

        while(b > 0) {
            T r = a % b;
            a = b;
            b = r;
        }

        return a;
    }

}
