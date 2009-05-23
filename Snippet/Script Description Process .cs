   1. public System.Collections.Generic.IEnumerable<ScriptDescriptor> GetScriptDescriptors()  
   2. {  
   3.     ScriptBehaviorDescriptor descriptor = new  
   4.          ScriptBehaviorDescriptor("Nucleo.Web.ListControls.ClientCheckboxList",   
   5.             this.ClientID);  
   6.     descriptor.AddProperty("activeIndex", this.ActiveIndex);  
   7.     descriptor.AddProperty("selectedIndex", this.SelectedIndex);  
   8.     descriptor.AddElementProperty("newItemsClientState", this.NewItemClientStateID);  
   9.     descriptor.AddElementProperty("removedItemsClientState",   
  10.           this.RemovedItemClientStateID);  
  11.     descriptor.AddEvent("allItemsSelected", this.OnClientAllItemsSelected);  
  12.     descriptor.AddEvent("noItemsSelected", this.OnClientNoItemsSelected);  
  13.     descriptor.AddEvent("itemSelected", this.OnClientItemSelected);  
  14.     descriptor.AddEvent("itemToggled", this.OnClientItemToggled);  
  15.     return new ScriptDescriptor[] { descriptor };  
  16. }  