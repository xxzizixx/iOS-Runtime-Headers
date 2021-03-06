/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPolicyRouteRule : NSObject <NEPrettyDescription> {
    int  _action;
    NSString * _interfaceName;
    int  _type;
}

@property int action;
@property (copy) NSString *interfaceName;
@property int type;

+ (id)routeRuleWithAction:(int)arg1 forInterfaceName:(id)arg2;
+ (id)routeRuleWithAction:(int)arg1 forType:(int)arg2;

- (void).cxx_destruct;
- (int)action;
- (id)actionString;
- (unsigned char)actionValue;
- (BOOL)addTLVsToMessage:(id)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned int)arg2;
- (id)init;
- (id)initInternal;
- (id)interfaceName;
- (void)setAction:(int)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeString;
- (unsigned char)typeValue;
- (BOOL)validate;

@end
