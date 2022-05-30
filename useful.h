using ContextI = std::vector <Ident>;
using ContextE = std::vector <Expr*>;
using ContextIE = std::vector < std::pair <Ident, Expr*> >;
using ContextIT = std::vector < std::pair <Ident, Type*> >;
using Constraint = std::vector < std::pair <Type*, Type*> >;

int stoi_nl(std::string &str) {
    int res = 0, mod = 1;
    for (int i = (int)str.size() - 2; i >= 1; i--) {
        res += mod * ((int)(str[i] - '0'));
        mod *= 10;
    }
    return res;
}

std::string itos_nl(int n) {
    std::string res;
    if (n == 0)
        res = "0";
    while(n) {
        res.push_back((char)(n%10 + '0'));
        n /= 10;
    }
    std::reverse(res.begin(), res.end());
    res = "[" + res + "]";
    return res;
}

int stoi_meta(std::string &str) {
    int res = 0, mod = 1;
    for (int i = (int)str.size() - 2; i >= 1; i--) {
        res += mod * ((int)(str[i] - '0'));
        mod *= 10;
    }
    return res;
}

std::string itos_meta(int n) {
    std::string res;
    if (n == 0)
        res = "0";
    while(n) {
        res.push_back((char)(n%10 + '0'));
        n /= 10;
    }
    std::reverse(res.begin(), res.end());
    res = "{" + res + "}";
    return res;
}

bool is_nl(std::string &str) {
    if ((int)str.size() >= 3 && str[0] == '[' && str.back() == ']')
        return true;
    else
        return false;
}

bool is_meta(std::string &str) {
    if ((int)str.size() >= 3 && str[0] == '{' && str.back() == '}')
        return true;
    else
        return false;
}

int find_position_backward(ContextI &vec, Ident &str) {
    for (int i = (int)vec.size() - 1; i >= 0; i--) {
        if (vec[i] == str)
            return i;
    }
    return -1;
}

int find_position_backward(ContextIE &vec, Ident &str) {
    for (int i = (int)vec.size() - 1; i >= 0; i--) {
        if (vec[i].first == str)
            return i;
    }
    return -1;
}

int find_position_backward(ContextIT &vec, Ident &str) {
    for (int i = (int)vec.size() - 1; i >= 0; i--) {
        if (vec[i].first == str)
            return i;
    }
    return -1;
}

int find_position_backward_nl(ContextIT &vec, Ident &str) {
    int pos = 0;
    for (int i = (int)vec.size() - 1; i >= 0; i--) {
        if (vec[i].first == str && !vec[i].second)
            return pos;
        if (!vec[i].second)
            pos++;
    }
    return -1;
}

