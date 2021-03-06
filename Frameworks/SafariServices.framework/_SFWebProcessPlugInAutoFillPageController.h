/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFWebProcessPlugInAutoFillPageController : _SFWebProcessPlugInPageController <SFFormAutoFiller, SFInjectedJavaScriptWebProcessController> {
    _WKRemoteObjectInterface * _activityControllerInterface;
    _WKRemoteObjectInterface * _autoFillerInterface;
    _SFFormMetadataController * _formMetadataController;
    WKWebProcessPlugInScriptWorld * _isolatedWorld;
    unsigned int  _loadDeferringReasons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFFormMetadataController *formMetadataController;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned int loadDeferringReasons;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addLoadDeferringReasons:(unsigned int)arg1;
- (void)annotateForm:(int)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)autoFillForm:(int)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5;
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 selectFieldAfterFilling:(id)arg4;
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2;
- (void)clearAutoFillMetadata;
- (void)collectFormMetadataForPrefillingAtURL:(id)arg1;
- (void)collectMetadataForTextField:(id)arg1 inFrame:(id)arg2 atURL:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)collectURLsForPrefillingAtURL:(id)arg1;
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (id)formMetadataController;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;
- (unsigned int)loadDeferringReasons;
- (void)removeLoadDeferringReasons:(unsigned int)arg1;
- (void)resumeLoadingAfterSavingFormData;
- (void)runJavaScriptForActivity:(id)arg1 withScript:(id)arg2 object:(id)arg3 invokeMethod:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 andClearField:(id)arg3 inFrame:(id)arg4;
- (void)setFormMetadataController:(id)arg1;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didRemoveFrameFromHierarchy:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(int)arg2 forFrame:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)willDestroyBrowserContextController:(id)arg1;

@end
