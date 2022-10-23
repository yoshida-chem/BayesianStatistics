data {
    // 入力のチェックにもなるのでわかるところは下限と上限をつける
    int<lower=0> N;
    array[N] real<lower=18, upper=70> X;
    array[N] real<lower=100, upper=5000> Y;
}

parameters {
    real a;
    real b;
    real<lower=0> sigma;
}

transformed parameters {
    array[N] real y_base;
    for (n in 1:N) {
        y_base[n] = a + b*X[n];
    }
}

model {
    // 各パラメータの無情報事前分布の指定は省略
    for (n in 1:N) {
        Y[n] ~ normal(y_base[n], sigma);
    }
}


