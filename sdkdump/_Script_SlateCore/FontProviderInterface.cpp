#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "FontProviderInterface.hpp"
_Script_CoreUObject::Class* _Script_SlateCore::FontProviderInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SlateCore.FontProviderInterface");
    return result;
}
