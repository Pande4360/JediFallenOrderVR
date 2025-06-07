#include "..\FUObjectArray.hpp"
#include "BTService_BlackboardBase.hpp"
#include "BTService_RunEQS.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTService_RunEQS::get_EQSRequest() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_AIModule::BTService_RunEQS::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTService_RunEQS");
    return result;
}
