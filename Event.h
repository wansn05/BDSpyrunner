#pragma once
#include <string>
#include <unordered_map>
using std::string;
using std::unordered_map;
enum class Event {
	onConsoleInput,
	onConsoleOutput,
	onSelectForm,
	onUseItem,
	onPlaceBlock,
	onDestroyBlock,
	onOpenChest,
	onOpenBarrel,
	onCloseChest,
	onCloseBarrel,
	onContainerChange,
	onChangeDimension,
	onMobDie,
	onMobHurt,
	onRespawn,
	onChat,
	onInputText,
	onCommandBlockUpdate,
	onInputCommand,
	onCommandBlockPerform,
	onPlyaerJoin,
	onPlyaerLeft,
	onPlayerAttack,
	onLevelExplode,
	onSetArmor,
	onFallBlockTransform,
	onUseRespawnAnchorBlock,
	onScoreChanged,
	onMove
};
static Event toEvent(const string& s) {
	const static unordered_map<string, Event> events{
	{u8"��̨����",Event::onConsoleInput},
	{u8"��̨���",Event::onConsoleOutput},
	{u8"ѡ�����",Event::onSelectForm},
	{u8"ʹ����Ʒ",Event::onUseItem},
	{u8"���÷���",Event::onPlaceBlock},
	{u8"�ƻ�����",Event::onDestroyBlock},
	{u8"������",Event::onOpenChest},
	{u8"��ľͰ",Event::onOpenBarrel},
	{u8"�ر�����",Event::onCloseChest},
	{u8"�ر�ľͰ",Event::onCloseBarrel},
	{u8"����ȡ��",Event::onContainerChange},
	{u8"�л�ά��",Event::onChangeDimension},
	{u8"��������",Event::onMobDie},
	{u8"��������",Event::onMobHurt},
	{u8"�������",Event::onRespawn},
	{u8"������Ϣ",Event::onChat},
	{u8"�����ı�",Event::onInputText},
	{u8"���������",Event::onCommandBlockUpdate},
	{u8"����ָ��",Event::onInputCommand},
	{u8"�����ִ��",Event::onCommandBlockPerform},
	{u8"������Ϸ",Event::onPlyaerJoin},
	{u8"�뿪��Ϸ",Event::onPlyaerLeft},
	{u8"��ҹ���",Event::onPlayerAttack},
	{u8"���籬ը",Event::onLevelExplode},
	{u8"��Ҵ���",Event::onSetArmor},
	{u8"�����ƻ�",Event::onFallBlockTransform},
	{u8"ʹ������ê",Event::onUseRespawnAnchorBlock},
	{u8"�Ʒְ�ı�",Event::onScoreChanged},
	{u8"����ƶ�",Event::onMove},
	{u8"onConsoleInput",Event::onConsoleInput},
	{u8"onConsoleOutput",Event::onConsoleOutput},
	{u8"onSelectForm",Event::onSelectForm},
	{u8"onUseItem",Event::onUseItem},
	{u8"onPlaceBlock",Event::onPlaceBlock},
	{u8"onDestroyBlock",Event::onDestroyBlock},
	{u8"onOpenChest",Event::onOpenChest},
	{u8"onOpenBarrel",Event::onOpenBarrel},
	{u8"onCloseChest",Event::onCloseChest},
	{u8"onCloseBarrel",Event::onCloseBarrel},
	{u8"onContainerChange",Event::onContainerChange},
	{u8"onChangeDimension",Event::onChangeDimension},
	{u8"onMobDie",Event::onMobDie},
	{u8"onMobHurt",Event::onMobHurt},
	{u8"onRespawn",Event::onRespawn},
	{u8"onChat",Event::onChat},
	{u8"onInputText",Event::onInputText},
	{u8"onCommandBlockUpdate",Event::onCommandBlockUpdate},
	{u8"onInputCommand",Event::onInputCommand},
	{u8"onCommandBlockPerform",Event::onCommandBlockPerform},
	{u8"onPlyaerJoin",Event::onPlyaerJoin},
	{u8"onPlyaerLeft",Event::onPlyaerLeft},
	{u8"onPlayerAttack",Event::onPlayerAttack},
	{u8"onLevelExplode",Event::onLevelExplode},
	{u8"onSetArmor",Event::onSetArmor},
	{u8"onFallBlockTransform",Event::onFallBlockTransform},
	{u8"onUseRespawnAnchorBlock",Event::onUseRespawnAnchorBlock},
	{u8"onScoreChanged",Event::onScoreChanged},
	{u8"onMove",Event::onMove}
	};
	return events.at(s);
}