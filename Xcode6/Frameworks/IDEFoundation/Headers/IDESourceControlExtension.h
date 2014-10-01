

#import <Foundation/Foundation.h>

@protocol IDESourceControlProtocol;

@interface IDESourceControlExtension : NSObject
{
    id <IDESourceControlProtocol> _delegate;
    NSString *_identifier;
    NSString *_title;
    NSString *_directoryIdentifier;
    Class _delegateClass;
    NSArray *_supportedProtocols;
    BOOL _distributed;
    BOOL _requiresUsernameInURL;
    BOOL _commitMessageRequired;
    BOOL _supportsLocalBlame;
    BOOL _supportsFineGrainedCheckouts;
    BOOL _repositoryLayoutNeeded;
    BOOL _supportsRemotes;
}

@property(readonly) BOOL supportsRemotes; // @synthesize supportsRemotes=_supportsRemotes;
@property(readonly) BOOL repositoryLayoutNeeded; // @synthesize repositoryLayoutNeeded=_repositoryLayoutNeeded;
@property(readonly) BOOL supportsFineGrainedCheckouts; // @synthesize supportsFineGrainedCheckouts=_supportsFineGrainedCheckouts;
@property(readonly) BOOL supportsLocalBlame; // @synthesize supportsLocalBlame=_supportsLocalBlame;
@property(readonly) BOOL commitMessageRequired; // @synthesize commitMessageRequired=_commitMessageRequired;
@property(readonly) BOOL requiresUsernameInURL; // @synthesize requiresUsernameInURL=_requiresUsernameInURL;
@property(readonly) BOOL distributed; // @synthesize distributed=_distributed;
@property(readonly) NSArray *supportedProtocols; // @synthesize supportedProtocols=_supportedProtocols;
@property(readonly) Class delegateClass; // @synthesize delegateClass=_delegateClass;
@property(readonly) NSString *directoryIdentifier; // @synthesize directoryIdentifier=_directoryIdentifier;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *Xcode3Title;
@property(readonly) id <IDESourceControlProtocol> delegate; // @synthesize delegate=_delegate;
- (id)initWithDVTExtension:(id)arg1;

@end

