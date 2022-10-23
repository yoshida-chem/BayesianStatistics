data {
    // 入力のチェックにもなるのでわかるところは下限と上限をつける
    int<lower=0> N;
    array[N] real<lower=18, upper=70> X;
    array[N] real<lower=100, upper=5000> Y;

    // 予測したいデータ
    int<lower=0> N_new;
    array[N_new] real X_new;
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

generated quantities {
    array [N_new] real y_base_new;
    array [N_new] real y_new;
    for (n in 1:N_new) {
        y_base_new[n] = a + b*X_new[n];
        // ある分布に従う乱数を発生する場合は「分布名_rng()」関数を使用
        y_new[n] = normal_rng(y_base_new[n], sigma);
    }
}

