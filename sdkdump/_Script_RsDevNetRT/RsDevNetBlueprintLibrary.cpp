#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "RsDevNetBlueprintLibrary.hpp"
_Script_CoreUObject::Class* _Script_RsDevNetRT::RsDevNetBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsDevNetRT.RsDevNetBlueprintLibrary");
    return result;
}
bool _Script_RsDevNetRT::RsDevNetBlueprintLibrary::RequestScreenshot(void* Description) {
    return;
}
