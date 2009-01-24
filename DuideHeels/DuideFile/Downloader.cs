namespace DuideHeels
{
    using System.Collections.Specialized;
    using System.Net;
    using System.IO;

    class Downloader
    {
        public Downloader()
        {
            Reqs = 0;
            Finished = 0;
            Canceled = false;
            SkipPage = false;
        }

        public NameValueCollection Imgs
        {
            get { if (nvc == null) nvc = new NameValueCollection(); return nvc; }
        }

        public WebClient Rip
        {
            get { if (wc == null) wc = new WebClient(); return wc; }
        }

        public int Reqs { get; set; }
        public int Finished { get; set; }
        public bool Canceled { get; set; }
        NameValueCollection nvc;
        WebClient wc;
        public PushAction PushState { get; set; }
        public ParseStyle PS { get; set; }
        public FileInfo SaveOrDelete { get; set; }
        public FileInfo Current { get; set; }
        public string ImageLocation { get; set; }
        public bool SkipPage { get; set; }
        public string Title { get; set; }
        public bool TooSmall { get; set; }
        public string Address { get; set; }

        public void Reset()
        {
            PushState = PushAction.Download;
            Imgs.Clear();
            Finished = 0;
            Canceled = false;
            Title = string.Empty;
            Address = string.Empty;
            Title = string.Empty;
        }
    }
    
    enum ParseStyle { Heels, Duide, Other };
    enum PushAction { Download, Cancel };
}
