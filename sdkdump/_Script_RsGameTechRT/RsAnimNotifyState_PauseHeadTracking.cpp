#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "RsAnimNotifyState_PauseHeadTracking.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotifyState_PauseHeadTracking::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotifyState_PauseHeadTracking");
    return result;
}
