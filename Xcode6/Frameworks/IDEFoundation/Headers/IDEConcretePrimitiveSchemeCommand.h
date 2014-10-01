

#import <IDEFoundation/IDESchemeCommand.h>

#import <IDEFoundation/IDEPrimitiveSchemeCommand-Protocol.h>

@class NSString;

@interface IDEConcretePrimitiveSchemeCommand : IDESchemeCommand <IDEPrimitiveSchemeCommand>
{
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

