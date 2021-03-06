/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolConsoleStackTrace : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *callFrames;
@property (nonatomic, retain) RWIProtocolConsoleStackTrace *parentStackTrace;
@property (nonatomic) BOOL topCallFrameIsBoundary;
@property (nonatomic) BOOL truncated;

- (id)callFrames;
- (id)initWithCallFrames:(id)arg1;
- (id)parentStackTrace;
- (void)setCallFrames:(id)arg1;
- (void)setParentStackTrace:(id)arg1;
- (void)setTopCallFrameIsBoundary:(BOOL)arg1;
- (void)setTruncated:(BOOL)arg1;
- (BOOL)topCallFrameIsBoundary;
- (BOOL)truncated;

@end
