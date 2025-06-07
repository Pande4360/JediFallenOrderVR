#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\Box2D.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\DateTime.hpp"
#include "..\_Script_CoreUObject\FrameNumber.hpp"
#include "..\_Script_CoreUObject\FrameRate.hpp"
#include "..\_Script_CoreUObject\IntVector.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Matrix.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Plane.hpp"
#include "..\_Script_CoreUObject\QualifiedFrameTime.hpp"
#include "..\_Script_CoreUObject\RandomStream.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Timespan.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "FloatSpringState.hpp"
#include "KismetMathLibrary.hpp"
#include "VectorSpringState.hpp"
_Script_CoreUObject::Transform _Script_Engine::KismetMathLibrary::TLerp(_Script_CoreUObject::Transform& A, _Script_CoreUObject::Transform& B, float Alpha, void* InterpMode) {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::FromHours(float Hours) {
    return;
}
bool _Script_Engine::KismetMathLibrary::NotEqual_FloatFloat(float A, float B) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::KismetMathLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.KismetMathLibrary");
    return result;
}
int32_t _Script_Engine::KismetMathLibrary::Xor_IntInt(int32_t A, int32_t B) {
    return;
}
float _Script_Engine::KismetMathLibrary::VSizeSquared(_Script_CoreUObject::Vector A) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::MakeRotFromZY(_Script_CoreUObject::Vector& Z, _Script_CoreUObject::Vector& Y) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Subtract_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::VLerp(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, float Alpha) {
    return;
}
float _Script_Engine::KismetMathLibrary::VSizeXY(_Script_CoreUObject::Vector A) {
    return;
}
float _Script_Engine::KismetMathLibrary::SignOfFloat(float A) {
    return;
}
float _Script_Engine::KismetMathLibrary::TimespanRatio(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::MakeRotFromXZ(_Script_CoreUObject::Vector& X, _Script_CoreUObject::Vector& Z) {
    return;
}
float _Script_Engine::KismetMathLibrary::VSize2DSquared(_Script_CoreUObject::Vector2D A) {
    return;
}
float _Script_Engine::KismetMathLibrary::VSize2D(_Script_CoreUObject::Vector2D A) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetMathLibrary::Subtract_Vector2DFloat(_Script_CoreUObject::Vector2D A, float B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Conv_FloatToVector(float InFloat) {
    return;
}
float _Script_Engine::KismetMathLibrary::VSize(_Script_CoreUObject::Vector A) {
    return;
}
void* _Script_Engine::KismetMathLibrary::Subtract_ByteByte(void* A, void* B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::VInterpTo_Constant(_Script_CoreUObject::Vector current, _Script_CoreUObject::Vector Target, float DeltaTime, float InterpSpeed) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::KismetMathLibrary::CInterpTo(_Script_CoreUObject::LinearColor current, _Script_CoreUObject::LinearColor Target, float DeltaTime, float InterpSpeed) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::VInterpTo(_Script_CoreUObject::Vector current, _Script_CoreUObject::Vector Target, float DeltaTime, float InterpSpeed) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::MakeRotationFromAxes(_Script_CoreUObject::Vector Forward, _Script_CoreUObject::Vector Right, _Script_CoreUObject::Vector Up) {
    return;
}
_Script_CoreUObject::DateTime _Script_Engine::KismetMathLibrary::Today() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::VectorSpringInterp(_Script_CoreUObject::Vector current, _Script_CoreUObject::Vector Target, _Script_Engine::VectorSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::TransformLocation(_Script_CoreUObject::Transform& T, _Script_CoreUObject::Vector Location) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetMathLibrary::Vector2DInterpTo_Constant(_Script_CoreUObject::Vector2D current, _Script_CoreUObject::Vector2D Target, float DeltaTime, float InterpSpeed) {
    return;
}
bool _Script_Engine::KismetMathLibrary::PointsAreCoplanar(void*& Points, float Tolerance) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetMathLibrary::Vector2DInterpTo(_Script_CoreUObject::Vector2D current, _Script_CoreUObject::Vector2D Target, float DeltaTime, float InterpSpeed) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::RandomUnitVectorFromStream(_Script_CoreUObject::RandomStream& Stream) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::VEase(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, float Alpha, void* EasingFunc, float BlendExp, int32_t Steps) {
    return;
}
_Script_CoreUObject::DateTime _Script_Engine::KismetMathLibrary::UtcNow() {
    return;
}
void _Script_Engine::KismetMathLibrary::HSVToRGB_Vector(_Script_CoreUObject::LinearColor HSV, _Script_CoreUObject::LinearColor& RGB) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::TransformRotation(_Script_CoreUObject::Transform& T, _Script_CoreUObject::Rotator Rotation) {
    return;
}
float _Script_Engine::KismetMathLibrary::RandomFloatInRangeFromStream(float Min, float Max, _Script_CoreUObject::RandomStream& Stream) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::TransformDirection(_Script_CoreUObject::Transform& T, _Script_CoreUObject::Vector Direction) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::InverseTransformDirection(_Script_CoreUObject::Transform& T, _Script_CoreUObject::Vector Direction) {
    return;
}
void _Script_Engine::KismetMathLibrary::RGBToHSV(_Script_CoreUObject::LinearColor InColor, float& H, float& S, float& V, float& A) {
    return;
}
float _Script_Engine::KismetMathLibrary::Transform_Determinant(_Script_CoreUObject::Transform& Transform) {
    return;
}
void _Script_Engine::KismetMathLibrary::MaxOfIntArray(void*& IntArray, int32_t& IndexOfMaxValue, int32_t& MaxValue) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::KismetMathLibrary::TInterpTo(_Script_CoreUObject::Transform& current, _Script_CoreUObject::Transform& Target, float DeltaTime, float InterpSpeed) {
    return;
}
bool _Script_Engine::KismetMathLibrary::EqualEqual_FloatFloat(float A, float B) {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::TimespanZeroValue() {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::TimespanMinValue() {
    return;
}
bool _Script_Engine::KismetMathLibrary::EqualEqual_RotatorRotator(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Rotator B, float ErrorTolerance) {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::TimespanMaxValue() {
    return;
}
bool _Script_Engine::KismetMathLibrary::TimespanFromString(void* TimespanString, _Script_CoreUObject::Timespan& Result) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::KismetMathLibrary::Conv_VectorToLinearColor(_Script_CoreUObject::Vector InVec) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::RandomInteger(int32_t Max) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::KismetMathLibrary::TEase(_Script_CoreUObject::Transform& A, _Script_CoreUObject::Transform& B, float Alpha, void* EasingFunc, float BlendExp, int32_t Steps) {
    return;
}
void _Script_Engine::KismetMathLibrary::MinimumAreaRectangle(_Script_CoreUObject::Object* WorldContextObject, void*& InVerts, _Script_CoreUObject::Vector& SampleSurfaceNormal, _Script_CoreUObject::Vector& OutRectCenter, _Script_CoreUObject::Rotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool bDebugDraw) {
    return;
}
float _Script_Engine::KismetMathLibrary::Tan(float A) {
    return;
}
float _Script_Engine::KismetMathLibrary::Atan2(float A, float B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Subtract_VectorInt(_Script_CoreUObject::Vector A, int32_t B) {
    return;
}
float _Script_Engine::KismetMathLibrary::RadiansToDegrees(float A) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Subtract_VectorFloat(_Script_CoreUObject::Vector A, float B) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetMathLibrary::Subtract_Vector2DVector2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B) {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::Subtract_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::Subtract_IntInt(int32_t A, int32_t B) {
    return;
}
float _Script_Engine::KismetMathLibrary::Subtract_FloatFloat(float A, float B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::RandomUnitVectorInEllipticalConeInDegreesFromStream(_Script_CoreUObject::Vector& ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees, _Script_CoreUObject::RandomStream& Stream) {
    return;
}
_Script_CoreUObject::DateTime _Script_Engine::KismetMathLibrary::Subtract_DateTimeTimespan(_Script_CoreUObject::DateTime A, _Script_CoreUObject::Timespan B) {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::Subtract_DateTimeDateTime(_Script_CoreUObject::DateTime A, _Script_CoreUObject::DateTime B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::RandomUnitVectorInConeInRadiansFromStream(_Script_CoreUObject::Vector& ConeDir, float ConeHalfAngleInRadians, _Script_CoreUObject::RandomStream& Stream) {
    return;
}
float _Script_Engine::KismetMathLibrary::Square(float A) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::KismetMathLibrary::Conv_MatrixToTransform(_Script_CoreUObject::Matrix& InMatrix) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::GetRightVector(_Script_CoreUObject::Rotator InRot) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::REase(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Rotator B, float Alpha, bool bShortestPath, void* EasingFunc, float BlendExp, int32_t Steps) {
    return;
}
float _Script_Engine::KismetMathLibrary::Sqrt(float A) {
    return;
}
float _Script_Engine::KismetMathLibrary::DegCos(float A) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::SignOfInteger(int32_t A) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::And_IntInt(int32_t A, int32_t B) {
    return;
}
float _Script_Engine::KismetMathLibrary::Sin(float A) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::RandomUnitVectorInEllipticalConeInDegrees(_Script_CoreUObject::Vector ConeDir, float MaxYawInDegrees, float MaxPitchInDegrees) {
    return;
}
void _Script_Engine::KismetMathLibrary::SetRandomStreamSeed(_Script_CoreUObject::RandomStream& Stream, int32_t NewSeed) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::SelectVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, bool bPickA) {
    return;
}
bool _Script_Engine::KismetMathLibrary::Not_PreBool(bool A) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::KismetMathLibrary::SelectTransform(_Script_CoreUObject::Transform& A, _Script_CoreUObject::Transform& B, bool bPickA) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::SelectRotator(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Rotator B, bool bPickA) {
    return;
}
void* _Script_Engine::KismetMathLibrary::SelectString(void* A, void* B, bool bPickA) {
    return;
}
float _Script_Engine::KismetMathLibrary::DegTan(float A) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::LessLess_VectorRotator(_Script_CoreUObject::Vector A, _Script_CoreUObject::Rotator B) {
    return;
}
_Script_CoreUObject::Object* _Script_Engine::KismetMathLibrary::SelectObject(_Script_CoreUObject::Object* A, _Script_CoreUObject::Object* B, bool bSelectA) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::KismetMathLibrary::SelectColor(_Script_CoreUObject::LinearColor A, _Script_CoreUObject::LinearColor B, bool bPickA) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::SelectInt(int32_t A, int32_t B, bool bPickA) {
    return;
}
float _Script_Engine::KismetMathLibrary::SelectFloat(float A, float B, bool bPickA) {
    return;
}
void* _Script_Engine::KismetMathLibrary::SelectClass(void* A, void* B, bool bSelectA) {
    return;
}
void _Script_Engine::KismetMathLibrary::SeedRandomStream(_Script_CoreUObject::RandomStream& Stream) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Multiply_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::Round(float A) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::RotatorFromAxisAndAngle(_Script_CoreUObject::Vector Axis, float Angle) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::ComposeRotators(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Rotator B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::RotateAngleAxis(_Script_CoreUObject::Vector InVect, float AngleDeg, _Script_CoreUObject::Vector Axis) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::RLerp(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Rotator B, float Alpha, bool bShortestPath) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::CreateVectorFromYawPitch(float Yaw, float Pitch, float Length) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::RInterpTo_Constant(_Script_CoreUObject::Rotator current, _Script_CoreUObject::Rotator Target, float DeltaTime, float InterpSpeed) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::RInterpTo(_Script_CoreUObject::Rotator current, _Script_CoreUObject::Rotator Target, float DeltaTime, float InterpSpeed) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::KismetMathLibrary::MakeTransform(_Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::Vector Scale) {
    return;
}
void _Script_Engine::KismetMathLibrary::RGBToHSV_Vector(_Script_CoreUObject::LinearColor RGB, _Script_CoreUObject::LinearColor& HSV) {
    return;
}
void _Script_Engine::KismetMathLibrary::ResetVectorSpringState(_Script_Engine::VectorSpringState& SpringState) {
    return;
}
bool _Script_Engine::KismetMathLibrary::Greater_FloatFloat(float A, float B) {
    return;
}
void _Script_Engine::KismetMathLibrary::ResetRandomStream(_Script_CoreUObject::RandomStream& Stream) {
    return;
}
void _Script_Engine::KismetMathLibrary::ResetFloatSpringState(_Script_Engine::FloatSpringState& SpringState) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::RandomUnitVectorInEllipticalConeInRadiansFromStream(_Script_CoreUObject::Vector& ConeDir, float MaxYawInRadians, float MaxPitchInRadians, _Script_CoreUObject::RandomStream& Stream) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Conv_LinearColorToVector(_Script_CoreUObject::LinearColor InLinearColor) {
    return;
}
bool _Script_Engine::KismetMathLibrary::DateTimeFromIsoString(void* IsoString, _Script_CoreUObject::DateTime& Result) {
    return;
}
float _Script_Engine::KismetMathLibrary::FInterpTo_Constant(float current, float Target, float DeltaTime, float InterpSpeed) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::RandomUnitVectorInEllipticalConeInRadians(_Script_CoreUObject::Vector ConeDir, float MaxYawInRadians, float MaxPitchInRadians) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Conv_IntVectorToVector(_Script_CoreUObject::IntVector& InIntVector) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::RandomUnitVectorInConeInRadians(_Script_CoreUObject::Vector ConeDir, float ConeHalfAngleInRadians) {
    return;
}
_Script_CoreUObject::IntVector _Script_Engine::KismetMathLibrary::FTruncVector(_Script_CoreUObject::Vector& InVector) {
    return;
}
float _Script_Engine::KismetMathLibrary::GridSnap_Float(float Location, float GridSize) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::RandomUnitVectorInConeInDegreesFromStream(_Script_CoreUObject::Vector& ConeDir, float ConeHalfAngleInDegrees, _Script_CoreUObject::RandomStream& Stream) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::RandomUnitVectorInConeInDegrees(_Script_CoreUObject::Vector ConeDir, float ConeHalfAngleInDegrees) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::InverseTransformLocation(_Script_CoreUObject::Transform& T, _Script_CoreUObject::Vector Location) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::RandomUnitVector() {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::FromSeconds(float Seconds) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::RandomRotatorFromStream(bool bRoll, _Script_CoreUObject::RandomStream& Stream) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::KismetMathLibrary::Multiply_LinearColorFloat(_Script_CoreUObject::LinearColor A, float B) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::RandomRotator(bool bRoll) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::GetDirectionUnitVector(_Script_CoreUObject::Vector from, _Script_CoreUObject::Vector to) {
    return;
}
float _Script_Engine::KismetMathLibrary::Multiply_IntFloat(int32_t A, float B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::RandomPointInBoundingBox(_Script_CoreUObject::Vector& origin, _Script_CoreUObject::Vector& BoxExtent) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::RandomIntegerInRangeFromStream(int32_t Min, int32_t Max, _Script_CoreUObject::RandomStream& Stream) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Conv_RotatorToVector(_Script_CoreUObject::Rotator InRot) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::RandomIntegerInRange(int32_t Min, int32_t Max) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::RandomIntegerFromStream(int32_t Max, _Script_CoreUObject::RandomStream& Stream) {
    return;
}
float _Script_Engine::KismetMathLibrary::RandomFloatInRange(float Min, float Max) {
    return;
}
void _Script_Engine::KismetMathLibrary::BreakTimespan(_Script_CoreUObject::Timespan InTimespan, int32_t& Days, int32_t& Hours, int32_t& Minutes, int32_t& Seconds, int32_t& Milliseconds) {
    return;
}
float _Script_Engine::KismetMathLibrary::RandomFloatFromStream(_Script_CoreUObject::RandomStream& Stream) {
    return;
}
float _Script_Engine::KismetMathLibrary::RandomFloat() {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::GetMinute(_Script_CoreUObject::DateTime A) {
    return;
}
bool _Script_Engine::KismetMathLibrary::RandomBoolWithWeightFromStream(float Weight, _Script_CoreUObject::RandomStream& RandomStream) {
    return;
}
bool _Script_Engine::KismetMathLibrary::RandomBoolWithWeight(float Weight) {
    return;
}
bool _Script_Engine::KismetMathLibrary::RandomBoolFromStream(_Script_CoreUObject::RandomStream& Stream) {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::Divide_TimespanFloat(_Script_CoreUObject::Timespan A, float Scalar) {
    return;
}
bool _Script_Engine::KismetMathLibrary::GreaterEqual_DateTimeDateTime(_Script_CoreUObject::DateTime A, _Script_CoreUObject::DateTime B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::RandomBool() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::ProjectVectorOnToVector(_Script_CoreUObject::Vector V, _Script_CoreUObject::Vector Target) {
    return;
}
float _Script_Engine::KismetMathLibrary::DegAcos(float A) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::GetYear(_Script_CoreUObject::DateTime A) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::ProjectVectorOnToPlane(_Script_CoreUObject::Vector V, _Script_CoreUObject::Vector PlaneNormal) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::ProjectPointOnToPlane(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Vector PlaneBase, _Script_CoreUObject::Vector PlaneNormal) {
    return;
}
float _Script_Engine::KismetMathLibrary::PerlinNoise1D(float Value) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::Percent_IntInt(int32_t A, int32_t B) {
    return;
}
float _Script_Engine::KismetMathLibrary::Percent_FloatFloat(float A, float B) {
    return;
}
void* _Script_Engine::KismetMathLibrary::Percent_ByteByte(void* A, void* B) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::Or_IntInt(int32_t A, int32_t B) {
    return;
}
_Script_CoreUObject::DateTime _Script_Engine::KismetMathLibrary::Now() {
    return;
}
bool _Script_Engine::KismetMathLibrary::NotEqual_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, float ErrorTolerance) {
    return;
}
bool _Script_Engine::KismetMathLibrary::NotEqual_Vector2DVector2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B, float ErrorTolerance) {
    return;
}
bool _Script_Engine::KismetMathLibrary::NotEqual_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Add_VectorFloat(_Script_CoreUObject::Vector A, float B) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::GetMilliseconds(_Script_CoreUObject::Timespan A) {
    return;
}
bool _Script_Engine::KismetMathLibrary::NotEqual_RotatorRotator(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Rotator B, float ErrorTolerance) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::MakeRotFromYZ(_Script_CoreUObject::Vector& Y, _Script_CoreUObject::Vector& Z) {
    return;
}
bool _Script_Engine::KismetMathLibrary::NotEqual_ObjectObject(_Script_CoreUObject::Object* A, _Script_CoreUObject::Object* B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::NotEqual_NameName(void* A, void* B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::NotEqual_IntInt(int32_t A, int32_t B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::NotEqual_DateTimeDateTime(_Script_CoreUObject::DateTime A, _Script_CoreUObject::DateTime B) {
    return;
}
float _Script_Engine::KismetMathLibrary::GetTotalDays(_Script_CoreUObject::Timespan A) {
    return;
}
bool _Script_Engine::KismetMathLibrary::NotEqual_ClassClass(void* A, void* B) {
    return;
}
void _Script_Engine::KismetMathLibrary::BreakRandomStream(_Script_CoreUObject::RandomStream& InRandomStream, int32_t& InitialSeed) {
    return;
}
void _Script_Engine::KismetMathLibrary::GetAxes(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Vector& X, _Script_CoreUObject::Vector& Y, _Script_CoreUObject::Vector& Z) {
    return;
}
bool _Script_Engine::KismetMathLibrary::IsMorning(_Script_CoreUObject::DateTime A) {
    return;
}
bool _Script_Engine::KismetMathLibrary::NotEqual_ByteByte(void* A, void* B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::NotEqual_BoolBool(bool A, bool B) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::Not_Int(int32_t A) {
    return;
}
void _Script_Engine::KismetMathLibrary::BreakRotIntoAxes(_Script_CoreUObject::Rotator& InRot, _Script_CoreUObject::Vector& X, _Script_CoreUObject::Vector& Y, _Script_CoreUObject::Vector& Z) {
    return;
}
float _Script_Engine::KismetMathLibrary::NormalizeToRange(float Value, float RangeMin, float RangeMax) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::KismetMathLibrary::InvertTransform(_Script_CoreUObject::Transform& T) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::NormalizedDeltaRotator(_Script_CoreUObject::Rotator A, _Script_CoreUObject::Rotator B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::FindClosestPointOnLine(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Vector LineOrigin, _Script_CoreUObject::Vector LineDirection) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::GreaterGreater_VectorRotator(_Script_CoreUObject::Vector A, _Script_CoreUObject::Rotator B) {
    return;
}
float _Script_Engine::KismetMathLibrary::NormalizeAxis(float Angle) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetMathLibrary::Normal2D(_Script_CoreUObject::Vector2D A) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Normal(_Script_CoreUObject::Vector A) {
    return;
}
bool _Script_Engine::KismetMathLibrary::IsLeapYear(int32_t Year) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::NegateVector(_Script_CoreUObject::Vector A) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::NegateRotator(_Script_CoreUObject::Rotator A) {
    return;
}
bool _Script_Engine::KismetMathLibrary::NearlyEqual_TransformTransform(_Script_CoreUObject::Transform& A, _Script_CoreUObject::Transform& B, float LocationTolerance, float RotationTolerance, float Scale3DTolerance) {
    return;
}
bool _Script_Engine::KismetMathLibrary::NearlyEqual_FloatFloat(float A, float B, float ErrorTolerance) {
    return;
}
float _Script_Engine::KismetMathLibrary::MultiplyMultiply_FloatFloat(float base, float Exp) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::Clamp(int32_t Value, int32_t Min, int32_t Max) {
    return;
}
float _Script_Engine::KismetMathLibrary::MultiplyByPi(float Value) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::GetReflectionVector(_Script_CoreUObject::Vector Direction, _Script_CoreUObject::Vector SurfaceNormal) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Multiply_VectorInt(_Script_CoreUObject::Vector A, int32_t B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Multiply_VectorFloat(_Script_CoreUObject::Vector A, float B) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::Conv_MatrixToRotator(_Script_CoreUObject::Matrix& InMatrix) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetMathLibrary::Multiply_Vector2DVector2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetMathLibrary::Multiply_Vector2DFloat(_Script_CoreUObject::Vector2D A, float B) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::KismetMathLibrary::Conv_VectorToTransform(_Script_CoreUObject::Vector InLocation) {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::Multiply_TimespanFloat(_Script_CoreUObject::Timespan A, float Scalar) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::Multiply_RotatorInt(_Script_CoreUObject::Rotator A, int32_t B) {
    return;
}
_Script_CoreUObject::IntVector _Script_Engine::KismetMathLibrary::Conv_IntToIntVector(int32_t inInt) {
    return;
}
float _Script_Engine::KismetMathLibrary::FInterpEaseInOut(float A, float B, float Alpha, float Exponent) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::Multiply_RotatorFloat(_Script_CoreUObject::Rotator A, float B) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::KismetMathLibrary::Multiply_LinearColorLinearColor(_Script_CoreUObject::LinearColor A, _Script_CoreUObject::LinearColor B) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::Multiply_IntInt(int32_t A, int32_t B) {
    return;
}
float _Script_Engine::KismetMathLibrary::Conv_IntToFloat(int32_t inInt) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::FCeil(float A) {
    return;
}
float _Script_Engine::KismetMathLibrary::Multiply_FloatFloat(float A, float B) {
    return;
}
float _Script_Engine::KismetMathLibrary::GetPointDistanceToLine(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Vector LineOrigin, _Script_CoreUObject::Vector LineDirection) {
    return;
}
void* _Script_Engine::KismetMathLibrary::Multiply_ByteByte(void* A, void* B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::MirrorVectorByNormal(_Script_CoreUObject::Vector InVect, _Script_CoreUObject::Vector InNormal) {
    return;
}
float _Script_Engine::KismetMathLibrary::DegSin(float A) {
    return;
}
float _Script_Engine::KismetMathLibrary::GetPointDistanceToSegment(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Vector SegmentStart, _Script_CoreUObject::Vector SegmentEnd) {
    return;
}
void _Script_Engine::KismetMathLibrary::MinOfIntArray(void*& IntArray, int32_t& IndexOfMinValue, int32_t& MinValue) {
    return;
}
void _Script_Engine::KismetMathLibrary::MinOfFloatArray(void*& FloatArray, int32_t& IndexOfMinValue, float& MinValue) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Conv_Vector2DToVector(_Script_CoreUObject::Vector2D InVector2D, float Z) {
    return;
}
void _Script_Engine::KismetMathLibrary::MinOfByteArray(void*& ByteArray, int32_t& IndexOfMinValue, void*& MinValue) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::DaysInYear(int32_t Year) {
    return;
}
float _Script_Engine::KismetMathLibrary::DotProduct2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::Min(int32_t A, int32_t B) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::KismetMathLibrary::ConvertTransformToRelative(_Script_CoreUObject::Transform& Transform, _Script_CoreUObject::Transform& ParentTransform) {
    return;
}
float _Script_Engine::KismetMathLibrary::GetTotalMilliseconds(_Script_CoreUObject::Timespan A) {
    return;
}
void _Script_Engine::KismetMathLibrary::MaxOfFloatArray(void*& FloatArray, int32_t& IndexOfMaxValue, float& MaxValue) {
    return;
}
void _Script_Engine::KismetMathLibrary::BreakTransform(_Script_CoreUObject::Transform& InTransform, _Script_CoreUObject::Vector& Location, _Script_CoreUObject::Rotator& Rotation, _Script_CoreUObject::Vector& Scale) {
    return;
}
void _Script_Engine::KismetMathLibrary::MaxOfByteArray(void*& ByteArray, int32_t& IndexOfMaxValue, void*& MaxValue) {
    return;
}
bool _Script_Engine::KismetMathLibrary::LessEqual_DateTimeDateTime(_Script_CoreUObject::DateTime A, _Script_CoreUObject::DateTime B) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::Max(int32_t A, int32_t B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Matrix_GetOrigin(_Script_CoreUObject::Matrix& InMatrix) {
    return;
}
float _Script_Engine::KismetMathLibrary::MapRangeUnclamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB) {
    return;
}
float _Script_Engine::KismetMathLibrary::MapRangeClamped(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetMathLibrary::MakeVector2D(float X, float Y) {
    return;
}
bool _Script_Engine::KismetMathLibrary::EqualEqual_NameName(void* A, void* B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::LessEqual_ByteByte(void* A, void* B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::MakeVector(float X, float Y, float Z) {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::MakeTimespan2(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t FractionNano) {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::FromMilliseconds(float Milliseconds) {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::MakeTimespan(int32_t Days, int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Milliseconds) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::MakeRotFromZX(_Script_CoreUObject::Vector& Z, _Script_CoreUObject::Vector& X) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::MakeRotFromZ(_Script_CoreUObject::Vector& Z) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::MakeRotFromYX(_Script_CoreUObject::Vector& Y, _Script_CoreUObject::Vector& X) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::MakeRotFromY(_Script_CoreUObject::Vector& Y) {
    return;
}
float _Script_Engine::KismetMathLibrary::Cos(float A) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::MakeRotFromXY(_Script_CoreUObject::Vector& X, _Script_CoreUObject::Vector& Y) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::MakeRotFromX(_Script_CoreUObject::Vector& X) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::MakeRotator(float Roll, float Pitch, float Yaw) {
    return;
}
_Script_CoreUObject::RandomStream _Script_Engine::KismetMathLibrary::MakeRandomStream(int32_t InitialSeed) {
    return;
}
_Script_CoreUObject::QualifiedFrameTime _Script_Engine::KismetMathLibrary::MakeQualifiedFrameTime(_Script_CoreUObject::FrameNumber Frame, _Script_CoreUObject::FrameRate FrameRate, float SubFrame) {
    return;
}
float _Script_Engine::KismetMathLibrary::MakePulsatingValue(float InCurrentTime, float InPulsesPerSecond, float InPhase) {
    return;
}
_Script_CoreUObject::Plane _Script_Engine::KismetMathLibrary::MakePlaneFromPointAndNormal(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Vector Normal) {
    return;
}
_Script_CoreUObject::FrameRate _Script_Engine::KismetMathLibrary::MakeFrameRate(int32_t Numerator, int32_t Denominator) {
    return;
}
bool _Script_Engine::KismetMathLibrary::LessEqual_FloatFloat(float A, float B) {
    return;
}
_Script_CoreUObject::DateTime _Script_Engine::KismetMathLibrary::MakeDateTime(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond) {
    return;
}
float _Script_Engine::KismetMathLibrary::Divide_FloatFloat(float A, float B) {
    return;
}
float _Script_Engine::KismetMathLibrary::Lerp(float A, float B, float Alpha) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::KismetMathLibrary::MakeColor(float R, float G, float B, float A) {
    return;
}
_Script_CoreUObject::Box2D _Script_Engine::KismetMathLibrary::MakeBox2D(_Script_CoreUObject::Vector2D Min, _Script_CoreUObject::Vector2D Max) {
    return;
}
float _Script_Engine::KismetMathLibrary::DegAtan(float A) {
    return;
}
float _Script_Engine::KismetMathLibrary::GetTotalMinutes(_Script_CoreUObject::Timespan A) {
    return;
}
_Script_CoreUObject::Box _Script_Engine::KismetMathLibrary::MakeBox(_Script_CoreUObject::Vector Min, _Script_CoreUObject::Vector Max) {
    return;
}
float _Script_Engine::KismetMathLibrary::Loge(float A) {
    return;
}
float _Script_Engine::KismetMathLibrary::Log(float A, float base) {
    return;
}
bool _Script_Engine::KismetMathLibrary::LinePlaneIntersection_OriginNormal(_Script_CoreUObject::Vector& LineStart, _Script_CoreUObject::Vector& LineEnd, _Script_CoreUObject::Vector PlaneOrigin, _Script_CoreUObject::Vector PlaneNormal, float& T, _Script_CoreUObject::Vector& Intersection) {
    return;
}
bool _Script_Engine::KismetMathLibrary::LinePlaneIntersection(_Script_CoreUObject::Vector& LineStart, _Script_CoreUObject::Vector& LineEnd, _Script_CoreUObject::Plane& APlane, float& T, _Script_CoreUObject::Vector& Intersection) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::KismetMathLibrary::LinearColorLerpUsingHSV(_Script_CoreUObject::LinearColor A, _Script_CoreUObject::LinearColor B, float Alpha) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::KismetMathLibrary::Conv_ColorToLinearColor(_Script_CoreUObject::Color InColor) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::KismetMathLibrary::LinearColorLerp(_Script_CoreUObject::LinearColor A, _Script_CoreUObject::LinearColor B, float Alpha) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::GetMillisecond(_Script_CoreUObject::DateTime A) {
    return;
}
bool _Script_Engine::KismetMathLibrary::LessEqual_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B) {
    return;
}
float _Script_Engine::KismetMathLibrary::FloatSpringInterp(float current, float Target, _Script_Engine::FloatSpringState& SpringState, float Stiffness, float CriticalDampingFactor, float DeltaTime, float Mass) {
    return;
}
bool _Script_Engine::KismetMathLibrary::LessEqual_IntInt(int32_t A, int32_t B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::EqualEqual_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, float ErrorTolerance) {
    return;
}
bool _Script_Engine::KismetMathLibrary::Less_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::GetHour(_Script_CoreUObject::DateTime A) {
    return;
}
bool _Script_Engine::KismetMathLibrary::Less_IntInt(int32_t A, int32_t B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::Less_FloatFloat(float A, float B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::EqualEqual_TransformTransform(_Script_CoreUObject::Transform& A, _Script_CoreUObject::Transform& B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::Less_DateTimeDateTime(_Script_CoreUObject::DateTime A, _Script_CoreUObject::DateTime B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::Less_ByteByte(void* A, void* B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::IsPointInBoxWithTransform(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Transform& BoxWorldTransform, _Script_CoreUObject::Vector BoxExtent) {
    return;
}
void _Script_Engine::KismetMathLibrary::BreakQualifiedFrameTime(_Script_CoreUObject::QualifiedFrameTime& InFrameTime, _Script_CoreUObject::FrameNumber& Frame, _Script_CoreUObject::FrameRate& FrameRate, float& SubFrame) {
    return;
}
bool _Script_Engine::KismetMathLibrary::IsPointInBox(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Vector BoxOrigin, _Script_CoreUObject::Vector BoxExtent) {
    return;
}
_Script_CoreUObject::DateTime _Script_Engine::KismetMathLibrary::DateTimeMinValue() {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::FTrunc(float A) {
    return;
}
bool _Script_Engine::KismetMathLibrary::IsAfternoon(_Script_CoreUObject::DateTime A) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::FindLookAtRotation(_Script_CoreUObject::Vector& Start, _Script_CoreUObject::Vector& Target) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::InverseTransformRotation(_Script_CoreUObject::Transform& T, _Script_CoreUObject::Rotator Rotation) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetMathLibrary::Divide_Vector2DVector2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::InRange_IntInt(int32_t Value, int32_t Min, int32_t Max, bool InclusiveMin, bool InclusiveMax) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Divide_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::InRange_FloatFloat(float Value, float Min, float Max, bool InclusiveMin, bool InclusiveMax) {
    return;
}
void _Script_Engine::KismetMathLibrary::BreakDateTime(_Script_CoreUObject::DateTime InDateTime, int32_t& Year, int32_t& Month, int32_t& Day, int32_t& Hour, int32_t& Minute, int32_t& Second, int32_t& Millisecond) {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::FromDays(float Days) {
    return;
}
float _Script_Engine::KismetMathLibrary::Hypotenuse(float Width, float Height) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::KismetMathLibrary::HSVToRGB(float H, float S, float V, float A) {
    return;
}
bool _Script_Engine::KismetMathLibrary::EqualEqual_ClassClass(void* A, void* B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::GreaterEqual_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::GreaterEqual_IntInt(int32_t A, int32_t B) {
    return;
}
float _Script_Engine::KismetMathLibrary::Ease(float A, float B, float Alpha, void* EasingFunc, float BlendExp, int32_t Steps) {
    return;
}
bool _Script_Engine::KismetMathLibrary::GreaterEqual_FloatFloat(float A, float B) {
    return;
}
float _Script_Engine::KismetMathLibrary::Conv_BoolToFloat(bool InBool) {
    return;
}
bool _Script_Engine::KismetMathLibrary::GreaterEqual_ByteByte(void* A, void* B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::Greater_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::ClassIsChildOf(void* TestClass, void* ParentClass) {
    return;
}
bool _Script_Engine::KismetMathLibrary::Greater_IntInt(int32_t A, int32_t B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::Greater_DateTimeDateTime(_Script_CoreUObject::DateTime A, _Script_CoreUObject::DateTime B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::Greater_ByteByte(void* A, void* B) {
    return;
}
void _Script_Engine::KismetMathLibrary::GetYawPitchFromVector(_Script_CoreUObject::Vector InVec, float& Yaw, float& Pitch) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::GetVectorArrayAverage(void*& Vectors) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::GetUpVector(_Script_CoreUObject::Rotator InRot) {
    return;
}
void _Script_Engine::KismetMathLibrary::FindNearestPointsOnLineSegments(_Script_CoreUObject::Vector Segment1Start, _Script_CoreUObject::Vector Segment1End, _Script_CoreUObject::Vector Segment2Start, _Script_CoreUObject::Vector Segment2End, _Script_CoreUObject::Vector& Segment1Point, _Script_CoreUObject::Vector& Segment2Point) {
    return;
}
float _Script_Engine::KismetMathLibrary::GetTotalSeconds(_Script_CoreUObject::Timespan A) {
    return;
}
float _Script_Engine::KismetMathLibrary::GetTotalHours(_Script_CoreUObject::Timespan A) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::ClampVectorSize(_Script_CoreUObject::Vector A, float Min, float Max) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::FMod(float Dividend, float Divisor, float& Remainder) {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::GetTimeOfDay(_Script_CoreUObject::DateTime A) {
    return;
}
void* _Script_Engine::KismetMathLibrary::Add_ByteByte(void* A, void* B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Cross_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B) {
    return;
}
float _Script_Engine::KismetMathLibrary::GetTAU() {
    return;
}
void _Script_Engine::KismetMathLibrary::GetSlopeDegreeAngles(_Script_CoreUObject::Vector& MyRightYAxis, _Script_CoreUObject::Vector& FloorNormal, _Script_CoreUObject::Vector& UpVector, float& OutSlopePitchDegreeAngle, float& OutSlopeRollDegreeAngle) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::GetSeconds(_Script_CoreUObject::Timespan A) {
    return;
}
float _Script_Engine::KismetMathLibrary::FixedTurn(float InCurrent, float InDesired, float InDeltaRate) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::GetSecond(_Script_CoreUObject::DateTime A) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::DaysInMonth(int32_t Year, int32_t Month) {
    return;
}
float _Script_Engine::KismetMathLibrary::GetPI() {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::GetMonth(_Script_CoreUObject::DateTime A) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::Add_IntInt(int32_t A, int32_t B) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetMathLibrary::Conv_VectorToVector2D(_Script_CoreUObject::Vector InVector) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::GetMinutes(_Script_CoreUObject::Timespan A) {
    return;
}
bool _Script_Engine::KismetMathLibrary::Conv_IntToBool(int32_t inInt) {
    return;
}
float _Script_Engine::KismetMathLibrary::GetMinElement(_Script_CoreUObject::Vector A) {
    return;
}
float _Script_Engine::KismetMathLibrary::GetMaxElement(_Script_CoreUObject::Vector A) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::GetHours(_Script_CoreUObject::Timespan A) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::GetHour12(_Script_CoreUObject::DateTime A) {
    return;
}
float _Script_Engine::KismetMathLibrary::DegAsin(float A) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::GetForwardVector(_Script_CoreUObject::Rotator InRot) {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::GetDuration(_Script_CoreUObject::Timespan A) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::GetDays(_Script_CoreUObject::Timespan A) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::GetDayOfYear(_Script_CoreUObject::DateTime A) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::GetDay(_Script_CoreUObject::DateTime A) {
    return;
}
_Script_CoreUObject::DateTime _Script_Engine::KismetMathLibrary::GetDate(_Script_CoreUObject::DateTime A) {
    return;
}
void _Script_Engine::KismetMathLibrary::GetAzimuthAndElevation(_Script_CoreUObject::Vector InDirection, _Script_CoreUObject::Transform& ReferenceFrame, float& Azimuth, float& Elevation) {
    return;
}
_Script_CoreUObject::LinearColor _Script_Engine::KismetMathLibrary::Conv_FloatToLinearColor(float InFloat) {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::FromMinutes(float Minutes) {
    return;
}
float _Script_Engine::KismetMathLibrary::DegAtan2(float A, float B) {
    return;
}
float _Script_Engine::KismetMathLibrary::Fraction(float A) {
    return;
}
float _Script_Engine::KismetMathLibrary::FMin(float A, float B) {
    return;
}
float _Script_Engine::KismetMathLibrary::FMax(float A, float B) {
    return;
}
float _Script_Engine::KismetMathLibrary::FInterpTo(float current, float Target, float DeltaTime, float InterpSpeed) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::FindClosestPointOnSegment(_Script_CoreUObject::Vector Point, _Script_CoreUObject::Vector SegmentStart, _Script_CoreUObject::Vector SegmentEnd) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::FFloor(float A) {
    return;
}
float _Script_Engine::KismetMathLibrary::FClamp(float Value, float Min, float Max) {
    return;
}
float _Script_Engine::KismetMathLibrary::Exp(float A) {
    return;
}
bool _Script_Engine::KismetMathLibrary::EqualEqual_Vector2DVector2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B, float ErrorTolerance) {
    return;
}
bool _Script_Engine::KismetMathLibrary::EqualEqual_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::EqualEqual_ObjectObject(_Script_CoreUObject::Object* A, _Script_CoreUObject::Object* B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::EqualEqual_IntInt(int32_t A, int32_t B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::EqualEqual_DateTimeDateTime(_Script_CoreUObject::DateTime A, _Script_CoreUObject::DateTime B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::EqualEqual_ByteByte(void* A, void* B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::EqualEqual_BoolBool(bool A, bool B) {
    return;
}
float _Script_Engine::KismetMathLibrary::Dot_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Divide_VectorInt(_Script_CoreUObject::Vector A, int32_t B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Divide_VectorFloat(_Script_CoreUObject::Vector A, float B) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetMathLibrary::Divide_Vector2DFloat(_Script_CoreUObject::Vector2D A, float B) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::Divide_IntInt(int32_t A, int32_t B) {
    return;
}
void* _Script_Engine::KismetMathLibrary::Divide_ByteByte(void* A, void* B) {
    return;
}
float _Script_Engine::KismetMathLibrary::DegreesToRadians(float A) {
    return;
}
_Script_CoreUObject::DateTime _Script_Engine::KismetMathLibrary::DateTimeMaxValue() {
    return;
}
bool _Script_Engine::KismetMathLibrary::DateTimeFromString(void* DateTimeString, _Script_CoreUObject::DateTime& Result) {
    return;
}
float _Script_Engine::KismetMathLibrary::CrossProduct2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::KismetMathLibrary::Conv_VectorToRotator(_Script_CoreUObject::Vector InVec) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::KismetMathLibrary::Conv_RotatorToTransform(_Script_CoreUObject::Rotator& InRotator) {
    return;
}
_Script_CoreUObject::Color _Script_Engine::KismetMathLibrary::Conv_LinearColorToColor(_Script_CoreUObject::LinearColor InLinearColor) {
    return;
}
void* _Script_Engine::KismetMathLibrary::Conv_IntToByte(int32_t inInt) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::Conv_ByteToInt(void* InByte) {
    return;
}
float _Script_Engine::KismetMathLibrary::Conv_ByteToFloat(void* InByte) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::Conv_BoolToInt(bool InBool) {
    return;
}
void* _Script_Engine::KismetMathLibrary::Conv_BoolToByte(bool InBool) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::KismetMathLibrary::ComposeTransforms(_Script_CoreUObject::Transform& A, _Script_CoreUObject::Transform& B) {
    return;
}
float _Script_Engine::KismetMathLibrary::ClampAxis(float Angle) {
    return;
}
float _Script_Engine::KismetMathLibrary::ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees) {
    return;
}
void _Script_Engine::KismetMathLibrary::BreakVector2D(_Script_CoreUObject::Vector2D InVec, float& X, float& Y) {
    return;
}
void _Script_Engine::KismetMathLibrary::BreakVector(_Script_CoreUObject::Vector InVec, float& X, float& Y, float& Z) {
    return;
}
void _Script_Engine::KismetMathLibrary::BreakTimespan2(_Script_CoreUObject::Timespan InTimespan, int32_t& Days, int32_t& Hours, int32_t& Minutes, int32_t& Seconds, int32_t& FractionNano) {
    return;
}
void _Script_Engine::KismetMathLibrary::BreakRotator(_Script_CoreUObject::Rotator InRot, float& Roll, float& Pitch, float& Yaw) {
    return;
}
void _Script_Engine::KismetMathLibrary::BreakFrameRate(_Script_CoreUObject::FrameRate& InFrameRate, int32_t& Numerator, int32_t& Denominator) {
    return;
}
void _Script_Engine::KismetMathLibrary::BreakColor(_Script_CoreUObject::LinearColor InColor, float& R, float& G, float& B, float& A) {
    return;
}
bool _Script_Engine::KismetMathLibrary::BooleanXOR(bool A, bool B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::BooleanOR(bool A, bool B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::BooleanNOR(bool A, bool B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::BooleanNAND(bool A, bool B) {
    return;
}
bool _Script_Engine::KismetMathLibrary::BooleanAND(bool A, bool B) {
    return;
}
void* _Script_Engine::KismetMathLibrary::BMin(void* A, void* B) {
    return;
}
void* _Script_Engine::KismetMathLibrary::BMax(void* A, void* B) {
    return;
}
float _Script_Engine::KismetMathLibrary::Atan(float A) {
    return;
}
float _Script_Engine::KismetMathLibrary::Asin(float A) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Add_VectorVector(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::KismetMathLibrary::Add_VectorInt(_Script_CoreUObject::Vector A, int32_t B) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetMathLibrary::Add_Vector2DVector2D(_Script_CoreUObject::Vector2D A, _Script_CoreUObject::Vector2D B) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::KismetMathLibrary::Add_Vector2DFloat(_Script_CoreUObject::Vector2D A, float B) {
    return;
}
_Script_CoreUObject::Timespan _Script_Engine::KismetMathLibrary::Add_TimespanTimespan(_Script_CoreUObject::Timespan A, _Script_CoreUObject::Timespan B) {
    return;
}
float _Script_Engine::KismetMathLibrary::Add_FloatFloat(float A, float B) {
    return;
}
_Script_CoreUObject::DateTime _Script_Engine::KismetMathLibrary::Add_DateTimeTimespan(_Script_CoreUObject::DateTime A, _Script_CoreUObject::Timespan B) {
    return;
}
float _Script_Engine::KismetMathLibrary::Acos(float A) {
    return;
}
int32_t _Script_Engine::KismetMathLibrary::Abs_Int(int32_t A) {
    return;
}
float _Script_Engine::KismetMathLibrary::Abs(float A) {
    return;
}
