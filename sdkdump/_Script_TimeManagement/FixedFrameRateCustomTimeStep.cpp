#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\EngineCustomTimeStep.hpp"
#include "FixedFrameRateCustomTimeStep.hpp"
void* _Script_TimeManagement::FixedFrameRateCustomTimeStep::get_FixedFrameRate() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_TimeManagement::FixedFrameRateCustomTimeStep::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TimeManagement.FixedFrameRateCustomTimeStep");
    return result;
}
