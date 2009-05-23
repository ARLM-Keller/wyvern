   /// <summary>

   /// Perform custom paging using LINQ to SQL

   /// </summary>

   /// <typeparam name="T">Type of the Datasource to be paged</typeparam>

   /// <typeparam name="TResult"></typeparam>

   /// <param name="obj">Object to be paged through</param>

   /// <param name="page">Page Number to fetch</param>

   /// <param name="pageSize">Number of rows per page</param>

   /// <param name="keySelector">Sorting Expression</param>

   /// <param name="asc">Sort ascending if true. Otherwise descending</param>

   /// <param name="rowsCount">Output parameter hold total number of rows</param>

   /// <returns>Page of result from the paged object</returns>

   public static IQueryable<T> Page<T, TResult>(this IQueryable<T> obj, int page, int pageSize, System.Linq.Expressions.Expression<Func<T, TResult>> keySelector, bool asc, out int rowsCount)

   {

       rowsCount = obj.Count();

       int innerRows = rowsCount - (page * pageSize);

       if(asc)

           return obj.OrderByDescending(keySelector).Take(innerRows).OrderBy(keySelector).Take(pageSize).AsQueryable();

       else

           return obj.OrderBy(keySelector).Take(innerRows).OrderByDescending(keySelector).Take(pageSize).AsQueryable();

   }
   
   
   [System.Web.Services.WebMethod]
	public static string[] GetNames(string prefixText, int count)
	{
		NamesDataContext db = new NamesDataContext();
		return db.tblNames.Where(n=> n.name.StartsWith(prefixText)).OrderBy(n => n.name).Select(n => n.name).Take(count).ToArray();
	}