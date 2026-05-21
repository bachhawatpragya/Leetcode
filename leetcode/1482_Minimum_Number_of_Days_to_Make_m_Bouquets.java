class Solution {
    public int possible(int[] bloomDay, int k, int D){
        int cnt=0, bouquet=0;
        for(int x:bloomDay){
            if(x<=D){
                cnt++;
                if(cnt==k){
                    bouquet++;
                    cnt=0;
                }
            }
            else{
                cnt=0;
            }
        }
        return bouquet;
    }

    public int minDays(int[] bloomDay, int m, int k) {
        long req=(long)m*k;
        int n=bloomDay.length;
        if(n<req)return -1;
        int min= Arrays.stream(bloomDay).min().getAsInt();
        int max= Arrays.stream(bloomDay).max().getAsInt();
        int l=min, r=max;
        while(l<r){
            int mid=(l+r)>>1;
            if(possible(bloomDay,k,mid)>=m){
                r=mid;
            }
            else l=mid+1;
        }
        return l;
    }
}