class Solution {
    public boolean asteroidsDestroyed(int mass, int[] asteroids) {
        Arrays.sort(asteroids);
        long nmass=mass;
        for( int i:asteroids){
            if (nmass < i) return false;
            nmass += i;
        }
        return true;
    }
}
public static void main(String[] args) {
    Solution s=new Solution();
    int mass=10;
    int[] asteroids={3,9,19,5,21};
    System.out.println(s.asteroidsDestroyed(mass,asteroids));
}