//
//  ViewController.h
//  GetMapDirections
//
//  Created by Malika Aubakirova on 8/8/15.
//  Copyright (c) 2015 Malika Aubakirova. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface ViewController : UIViewController <CLLocationManagerDelegate>

@property (strong, nonatomic) IBOutlet MKMapView *mapView;
@property (strong, nonatomic) CLLocationManager *locationManager;
@property (weak, nonatomic) IBOutlet UILabel *myAddress;
@property (strong, nonatomic) CLLocation *location;
@property (strong, nonatomic) IBOutlet UITextField *endAddress;

@end

