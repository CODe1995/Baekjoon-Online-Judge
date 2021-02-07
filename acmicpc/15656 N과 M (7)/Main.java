package boj15656;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	static StringBuilder sb = new StringBuilder();
	static StringTokenizer st;
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static int N,M;
	static int[] arr,newarr;
	static void solution(int depth) {
		if(depth==M) {
			for(int i =0;i<M;i++)sb.append(newarr[i]).append(" ");
			sb.append("\n");
			return;
		}
		for(int i =0;i<N;i++) {
			newarr[depth]=arr[i];
			solution(depth+1);
		}
	}
	public static void main(String[] args) throws IOException{
		st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		arr= new int[N];
		newarr = new int[M];
		st = new StringTokenizer(br.readLine());
		for(int i =0;i<N;i++)arr[i]=Integer.parseInt(st.nextToken());
		Arrays.sort(arr);
		solution(0);
		System.out.println(sb);
	}
}
