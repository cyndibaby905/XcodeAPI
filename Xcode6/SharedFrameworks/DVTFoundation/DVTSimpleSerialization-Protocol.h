

@class DVTSimpleDeserializer, DVTSimpleSerializer;

@protocol DVTSimpleSerialization
- (void)dvt_writeToSerializer:(DVTSimpleSerializer *)arg1;
- (id)dvt_initFromDeserializer:(DVTSimpleDeserializer *)arg1;
@end

