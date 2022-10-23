using System;
using System.Collections.Generic;

public static class GFG {
	static HashSet<List<int> > hull
		= new HashSet<List<int> >();
	// Stores the result (points of convex hull)

	// Returns the side of point p with respect to line
	// joining points p1 and p2.
	public static int findSide(List<int> p1, List<int> p2,
							List<int> p)
	{
		int val = (p[1] - p1[1]) * (p2[0] - p1[0])
				- (p2[1] - p1[1]) * (p[0] - p1[0]);

		if (val > 0) {
			return 1;
		}
		if (val < 0) {
			return -1;
		}
		return 0;
	}

	// returns a value proportional to the distance
	// between the point p and the line joining the
	// points p1 and p2
	public static int lineDist(List<int> p1, List<int> p2,
							List<int> p)
	{
		return Math.Abs((p[1] - p1[1]) * (p2[0] - p1[0])
						- (p2[1] - p1[1]) * (p[0] - p1[0]));
	}

	// End points of line L are p1 and p2. side can have
	// value 1 or -1 specifying each of the parts made by
	// the line L
	public static void quickHull(List<List<int> > a, int n,
								List<int> p1, List<int> p2,
								int side)
	{
		int ind = -1;
		int max_dist = 0;

		// finding the point with maximum distance
		// from L and also on the specified side of L.
		for (int i = 0; i < n; i++) {
			int temp = lineDist(p1, p2, a[i]);
			if (findSide(p1, p2, a[i]) == side
				&& temp > max_dist) {
				ind = i;
				max_dist = temp;
			}
		}

		// If no point is found, add the end points
		// of L to the convex hull.
		if (ind == -1) {
			hull.Add(p1);
			hull.Add(p2);
			return;
		}

		// Recur for the two parts divided by a[ind]
		quickHull(a, n, a[ind], p1,
				-findSide(a[ind], p1, p2));
		quickHull(a, n, a[ind], p2,
				-findSide(a[ind], p2, p1));
	}

	public static void printHull(List<List<int> > a, int n)
	{
		// a[i].second -> y-coordinate of the ith point
		if (n < 3) {
			Console.Write("Convex hull not possible\n");
			return;
		}

		// Finding the point with minimum and
		// maximum x-coordinate
		int min_x = 0;
		int max_x = 0;
		for (int i = 1; i < n; i++) {
			if (a[i][0] < a[min_x][0]) {
				min_x = i;
			}
			if (a[i][0] > a[max_x][0]) {
				max_x = i;
			}
		}

		// Recursively find convex hull points on
		// one side of line joining a[min_x] and
		// a[max_x]
		quickHull(a, n, a[min_x], a[max_x], 1);
		quickHull(a, n, a[min_x], a[max_x], -1);

		Console.Write("The points in Convex Hull are:\n");
		foreach(var item in hull)
		{
			Console.WriteLine(item[0] + " " + item[1]);
		}
	}

	// Driver code
	public static void Main()
	{
		// the set of points in the convex hull
		List<List<int> > a = new List<List<int> >();
		{
			a.Add(new List<int>() { 0, 3 });
			a.Add(new List<int>() { 1, 1 });
			a.Add(new List<int>() { 2, 2 });
			a.Add(new List<int>() { 4, 4 });
			a.Add(new List<int>() { 0, 0 });
			a.Add(new List<int>() { 1, 2 });
			a.Add(new List<int>() { 3, 1 });
			a.Add(new List<int>() { 3, 3 });
		};

		int n = a.Count;
		printHull(a, n);
	}
}
// The code is contributed by Aarti_Rathi
