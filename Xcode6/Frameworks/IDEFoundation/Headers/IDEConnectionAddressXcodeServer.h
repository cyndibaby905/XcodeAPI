

#import <IDEFoundation/IDEXcodeServer.h>

@interface IDEConnectionAddressXcodeServer : IDEXcodeServer
{
}

- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithConnectionAddress:(id)arg1 portNumber:(unsigned long long)arg2;
- (id)_nameFromConnectionAddress:(id)arg1;

@end

