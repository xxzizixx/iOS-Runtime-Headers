/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPayment : PBCodable <NSCopying> {
    NSData * _billingContact;
    NSData * _shippingContact;
    PKProtobufShippingMethod * _shippingMethod;
    PKProtobufPaymentToken * _token;
}

@property (nonatomic, retain) NSData *billingContact;
@property (nonatomic, readonly) BOOL hasBillingContact;
@property (nonatomic, readonly) BOOL hasShippingContact;
@property (nonatomic, readonly) BOOL hasShippingMethod;
@property (nonatomic, readonly) BOOL hasToken;
@property (nonatomic, retain) NSData *shippingContact;
@property (nonatomic, retain) PKProtobufShippingMethod *shippingMethod;
@property (nonatomic, retain) PKProtobufPaymentToken *token;

- (void).cxx_destruct;
- (id)billingContact;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBillingContact;
- (BOOL)hasShippingContact;
- (BOOL)hasShippingMethod;
- (BOOL)hasToken;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBillingContact:(id)arg1;
- (void)setShippingContact:(id)arg1;
- (void)setShippingMethod:(id)arg1;
- (void)setToken:(id)arg1;
- (id)shippingContact;
- (id)shippingMethod;
- (id)token;
- (void)writeTo:(id)arg1;

@end
