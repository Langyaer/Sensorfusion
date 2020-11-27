#ifndef MEASUREMENT_PACKAGE_H_
#define MEASUREMENT_PACKAGE_H_

#include "Eigen/Dense"

class MeasurementPackage {
public:
  long long timestamp_;

  enum SensorType{
    LASER,
    RADAR
  } sensor_type_;

  Eigen::VectorXd raw_measurements_;    //  VerctorXd表示X维的列向量，元素的数据类型为double。
};

#endif /* MEASUREMENT_PACKAGE_H_ */
