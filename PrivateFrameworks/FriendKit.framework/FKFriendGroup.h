/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit
 */

@interface FKFriendGroup : NSObject {
    <FKFriendGroupDelegate> * _delegate;
    NSMutableArray * _friendsManager;
    unsigned int  _groupSize;
    unsigned int  _selectedPosition;
    NSString * _title;
}

@property (nonatomic) <FKFriendGroupDelegate> *delegate;
@property (nonatomic) unsigned int selectedPosition;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (int)_firstEmptyPosition;
- (void)addFriend:(id)arg1 error:(unsigned int*)arg2;
- (BOOL)containsFriend:(id)arg1;
- (unsigned int)count;
- (id)delegate;
- (id)displayNameForGroupWithSeparator:(id)arg1;
- (id)friendAtPosition:(unsigned int)arg1;
- (id)friends;
- (id)init;
- (id)initWithDelegate:(id)arg1 groupSize:(unsigned int)arg2;
- (id)initWithGroupSize:(unsigned int)arg1;
- (BOOL)isFull;
- (unsigned int)positionOfFriend:(id)arg1;
- (void)removeFriendAtPosition:(unsigned int)arg1;
- (unsigned int)selectedPosition;
- (void)setDelegate:(id)arg1;
- (void)setFriend:(id)arg1 atPosition:(unsigned int)arg2 error:(unsigned int*)arg3;
- (void)setFriends:(id)arg1;
- (void)setSelectedPosition:(unsigned int)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
