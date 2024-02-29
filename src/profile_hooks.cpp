using namespace geode::prelude;

#include <Geode/modify/ProfilePage.hpp>
#include <Geode/Enums.hpp>

#include "settings.hpp"

class $modify(ProfilePage) {
    virtual void loadPageFromUserInfo(GJUserScore* score) {
        log::debug("loadPageFromUserInfo");
        ProfilePage::loadPageFromUserInfo(score);

        auto gameManager = GameManager::sharedState();
        auto settings = Settings::sharedInstance();

        auto player_menu = this->m_mainLayer->getChildByID("player-menu");

        if (player_menu == nullptr) {
            log::error("player_menu is null");
            return;
        }

        if (settings->m_override_cube) {
            auto player = static_cast<SimplePlayer*>(player_menu->getChildByID("player-icon")->getChildren()->objectAtIndex(0));
            player->setColor(gameManager->colorForIdx(settings->m_cube_override));
            player->setSecondColor(gameManager->colorForIdx(settings->m_cube_override2));
        }
        if (settings->m_override_ship) {
            auto player = static_cast<SimplePlayer*>(player_menu->getChildByID("player-ship")->getChildren()->objectAtIndex(0));
            player->setColor(gameManager->colorForIdx(settings->m_ship_override));
            player->setSecondColor(gameManager->colorForIdx(settings->m_ship_override2));            
        }
        if (settings->m_override_ball) {
            auto player = static_cast<SimplePlayer*>(player_menu->getChildByID("player-ball")->getChildren()->objectAtIndex(0));
            player->setColor(gameManager->colorForIdx(settings->m_ball_override));
            player->setSecondColor(gameManager->colorForIdx(settings->m_ball_override2));            
        }
        if (settings->m_override_bird) {
            auto player = static_cast<SimplePlayer*>(player_menu->getChildByID("player-ufo")->getChildren()->objectAtIndex(0));
            player->setColor(gameManager->colorForIdx(settings->m_bird_override));
            player->setSecondColor(gameManager->colorForIdx(settings->m_bird_override2));            
        }
        if (settings->m_override_dart) {
            auto player = static_cast<SimplePlayer*>(player_menu->getChildByID("player-wave")->getChildren()->objectAtIndex(0));
            player->setColor(gameManager->colorForIdx(settings->m_dart_override));
            player->setSecondColor(gameManager->colorForIdx(settings->m_dart_override2));            
        }
        if (settings->m_override_robot) {
            auto player = static_cast<SimplePlayer*>(player_menu->getChildByID("player-robot")->getChildren()->objectAtIndex(0));
            player->setColor(gameManager->colorForIdx(settings->m_robot_override));
            player->setSecondColor(gameManager->colorForIdx(settings->m_robot_override2));            
        }
        if (settings->m_override_spider) {
            auto player = static_cast<SimplePlayer*>(player_menu->getChildByID("player-spider")->getChildren()->objectAtIndex(0));
            player->setColor(gameManager->colorForIdx(settings->m_spider_override));
            player->setSecondColor(gameManager->colorForIdx(settings->m_spider_override2));            
        }
        if (settings->m_override_swing) {
            auto player = static_cast<SimplePlayer*>(player_menu->getChildByID("player-swing")->getChildren()->objectAtIndex(0));
            player->setColor(gameManager->colorForIdx(settings->m_swing_override));
            player->setSecondColor(gameManager->colorForIdx(settings->m_swing_override2));            
        }
    }
};