import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int N;
		Scanner sc = new Scanner(System.in); //스캐너 객체 생성
		
		
		N = sc.nextInt(); //정수 입력받기
		int[] num = new int[N]; //입력받은 수 배열에 넣기
		int cnt = N; //소수의 개수
		
		for(int j = 0;j<N;j++) {
			num[j] = sc.nextInt();
			if(num[j] == 1) { //1은 소수가 아니다
				cnt --;
			}else if(num[j] > 2) { //2는 소수이므로 아무 동작 x, 3부터 판별
				for(int i = 2; i < num[j]; i++) {
					
					if(num[j] % i == 0) { //소수가 아님
						cnt --;
						break;
					}
				}
			}
		}
		System.out.println(cnt);
		
	}

}