#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "CurveBase.hpp"
#include "CurveVector.hpp"
void* _Script_Engine::CurveVector::get_FloatCurves() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::CurveVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CurveVector");
    return result;
}
_Script_CoreUObject::Vector _Script_Engine::CurveVector::GetVectorValue(float InTime) {
    return;
}
