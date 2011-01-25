#import <UIKit/UIKit.h>

@interface MyView : UIView <UIGestureRecognizerDelegate>
{
	// Views the user can move
	UIImageView *firstPieceView;
	UIImageView *secondPieceView;
	UIImageView *thirdPieceView;
	
	BOOL piecesOnTop;  // Keeps track of whether or not two or more pieces are on top of each other
	int touchCount;
    
    UIView *pieceForReset;
    
	CGPoint startTouchPosition; 	
}

@property (nonatomic, retain) IBOutlet UIImageView *firstPieceView;
@property (nonatomic, retain) IBOutlet UIImageView *secondPieceView;
@property (nonatomic, retain) IBOutlet UIImageView *thirdPieceView;

@end
