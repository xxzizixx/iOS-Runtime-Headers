/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCWebArchiveDownloadOperation : NSOperation <WKNavigationDelegate> {
    BOOL  _executing;
    BOOL  _finished;
    id /* block */  _saveWebArchiveBlock;
    NSURL * _sourceURL;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (copy) id /* block */ saveWebArchiveBlock;
@property (nonatomic, retain) NSURL *sourceURL;
@property (readonly) Class superclass;
@property (nonatomic, retain) WKWebView *webView;

- (void).cxx_destruct;
- (void)_cancelLoadingWebView;
- (void)_failWithError:(id)arg1;
- (void)_finish;
- (void)_startLoadingWebView;
- (void)cancel;
- (id)initWithSourceURL:(id)arg1;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id /* block */)saveWebArchiveBlock;
- (void)setSaveWebArchiveBlock:(id /* block */)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setWebView:(id)arg1;
- (id)sourceURL;
- (void)start;
- (id)webView;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end
