class ProductOfNumbers {
public:
    vector<int> ans;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        ans.push_back(num);
    }
    
    int getProduct(int k) {
        int n=ans.size()-1;
        int a=1;
        int i=0;
        while(i<k){
            a*=ans[n--];
            i++;
        }
        return a;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
