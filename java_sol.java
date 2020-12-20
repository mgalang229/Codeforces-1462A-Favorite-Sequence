import java.io.*;
import java.util.*;

public class Main {
	static final Reader in = new Reader();
	static final PrintWriter out = new PrintWriter(System.out);

	public static void main(String[] args) {
		int t=in.nextInt();
//		int t=1;
		for(int i=1; i<=t; ++i)
			new Solver();
		out.close();
	}
	
	static class Solver {
		Solver() {
			int n=in.nextInt();
			int[] a = new int[n];
			for(int i=0; i<n; ++i)
				a[i]=in.nextInt();
			Map<Integer, Integer> mp = new HashMap<Integer, Integer>();
			int cnt=1;
			for(int i=0; i<=n/2; ++i) {
				mp.put(cnt, a[i]);
				cnt+=2;
			}
			cnt=2;
			for(int i=n-1; i>=n/2+1; --i) {
				mp.put(cnt, a[i]);
				cnt+=2;
			}
			for(Map.Entry<Integer, Integer> entry : mp.entrySet())
				out.print(entry.getValue()+" ");
			out.println();
		}
	}
	
	static class Reader {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		String next() {
			while(st==null||!st.hasMoreTokens()) {
				try {
					st=new StringTokenizer(in.readLine());
				} catch(Exception e) {}
			}	
			return st.nextToken();
		}
		int nextInt() {
			return Integer.parseInt(next());
		}
		long nextLong() {
			return Long.parseLong(next());
		}
		double nextDouble() {
			return Double.parseDouble(next());
		}
	}
	
}
