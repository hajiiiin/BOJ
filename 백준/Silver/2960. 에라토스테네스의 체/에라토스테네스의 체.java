import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int N, K;
		Scanner sc = new Scanner(System.in); //스캐너 객체 생성
		
		N = sc.nextInt(); //정수 입력받기
		K = sc.nextInt(); //몇번째 숫자
		int[] num = new int[N+1]; //입력받은 수 배열 만들기
		for(int j = 0;j<N+1;j++) {
			if(j == 0 || j == 1) {
				num[j] = 0;
			}else {
				num[j] = j;
			}
		}
		
		int p = 0;
		int k_count = 0; //k_count = K이면 종료
		int out = 0;
	
		for(int k = 2; k < num.length; k++) {
			if(num[k] != 0) {
				for(p = k; p<num.length; p+=k) { //배수들 다 0으로 만들기
					
					out = num[p]; //삭제하는 값 저장
					if(out != 0) {
						num[p] = 0;
						k_count ++;
					}
					if(k_count == K) { //배열이 전부 0이되면 종료
						break;
					}
				}
			}
			if(k_count == K) { //배열이 전부 0이되면 종료
				break;
			}
		}
		System.out.println(out);
	}
}
