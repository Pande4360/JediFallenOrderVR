#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WheeledVehicleMovementComponent.hpp"
#include "WheeledVehicleMovementComponent4W.hpp"
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent4W::get_SteeringCurve() {
    return (void*)((uintptr_t)this + 0x440);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent4W::get_EngineSetup() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent4W::get_TransmissionSetup() {
    return (void*)((uintptr_t)this + 0x410);
}
void* _Script_PhysXVehicles::WheeledVehicleMovementComponent4W::get_DifferentialSetup() {
    return (void*)((uintptr_t)this + 0x3f0);
}
float& _Script_PhysXVehicles::WheeledVehicleMovementComponent4W::get_AckermannAccuracy() {
    return *(float*)((uintptr_t)this + 0x40c);
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::WheeledVehicleMovementComponent4W::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PhysXVehicles.WheeledVehicleMovementComponent4W");
    return result;
}
