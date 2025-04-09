class NumArray {
public:
    vector<int>seg;
    int n=0;
    void build(vector<int>& nums,int pos,int start,int end){
        if(start==end){
            seg[pos]=nums[start];
            return;
        }
        int mid=(start+end)/2;
        build(nums,2*pos+1,start,mid);
        build(nums,2*pos+2,mid+1,end);
        seg[pos]=seg[2*pos+1]+seg[2*pos+2];
    }
    void update_tree(int pos,int start,int end,int ind,int val){
        if(ind<start || ind>end) return;
        if(start==end){
            if(start==ind)  seg[pos]=val;
        return;
        }
        int mid=(start+end)/2;
        update_tree(2*pos+1,start,mid,ind,val);
        update_tree(2*pos+2,mid+1,end,ind,val);
        seg[pos]=seg[2*pos+1]+seg[2*pos+2];
    }
    int range(int left,int right,int pos,int start,int end){
        if(left<=start && right>=end) return seg[pos];
        if(left>end || right<start ) return 0;
        int mid=(start+end)/2;
        return range(left,right,2*pos+1,start,mid)+range(left,right,2*pos+2,mid+1,end);
    }
    NumArray(vector<int>& nums) {
        if(nums.size()>0){
        n=nums.size();
        seg.resize(4*n,0);
        build(nums,0,0,n-1);
    }
    }
    
    void update(int index, int val) {
        if(n==0) return;
        update_tree(0,0,n-1,index,val);
    }
    
    int sumRange(int left, int right) {
        if(n==0) return 0;
        return range(left,right,0,0,n-1);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */
