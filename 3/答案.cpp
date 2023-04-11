vector<int> solution(vector<int> &A, int F, int M) {

    int sum = accumulate(A.begin(), A.end(), 0);

    int n = A.size() + F;

    int target_sum = M * n - sum;

    if (target_sum < F || target_sum > 6*F) {

        return {0};

    }

    vector<int> res(F, target_sum / F);

    int rem = target_sum % F;

    for (int i = 0; i < rem; i++) {

        res[i]++;

    }

    return res;

}

