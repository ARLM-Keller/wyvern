public string Tag( string tagName, string innerHtml, params Expression<Func<string, string>>[] attributes )

             {

                 StringBuilder tag = new StringBuilder();

      

                 tag.Append( "<" );

                 tag.Append( tagName );

      

                 StringBuilder tagAttributes = new StringBuilder();

      

                if ( attributes != null )

                {

                    foreach ( var attribute in attributes )

                    {

                        string attributeName = attribute.Parameters[ 0 ].Name;

                        string attributeValue = attribute.Compile()(string.Empty);

     

                        if ( !string.IsNullOrEmpty( attributeValue ) )

                        {

                            attributeValue = HttpUtility.HtmlEncode( attributeValue );

                        }

     

                        tagAttributes.AppendFormat( " {0}=\"{1}\"", attributeName, attributeValue );

                    }

                }

     

                if ( tagAttributes.Length > 0 )

                {

                    tag.Append( tagAttributes.ToString() );

                }

     

                if ( string.IsNullOrEmpty( innerHtml ) )

                {

                    tag.Append( " />" );

                }

                else

                {

                    tag.Append( ">" );

                    tag.Append( innerHtml );

                    tag.Append( "</" );

                    tag.Append( tagName );

                    tag.Append( ">" );

                }

     

                return tag.ToString();

            }