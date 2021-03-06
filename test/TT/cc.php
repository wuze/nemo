/*
Navicat MySQL Data Transfer

Source Server         : localhost
Source Server Version : 50151
Source Host           : localhost:3306
Source Database       : map_sys

Target Server Type    : MYSQL
Target Server Version : 50151
File Encoding         : 65001

Date: 2013-04-11 11:31:18
*/

SET FOREIGN_KEY_CHECKS=0;
-- ----------------------------
-- Table structure for `ci_sessions`
-- ----------------------------
DROP TABLE IF EXISTS `ci_sessions`;
CREATE TABLE `ci_sessions` (
  `session_id` varchar(40) NOT NULL DEFAULT '0',
  `ip_address` varchar(16) NOT NULL DEFAULT '0',
  `user_agent` varchar(120) NOT NULL,
  `last_activity` int(10) unsigned NOT NULL DEFAULT '0',
  `user_data` text NOT NULL,
  PRIMARY KEY (`session_id`),
  KEY `last_activity_idx` (`last_activity`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- ----------------------------
-- Records of ci_sessions
-- ----------------------------

-- ----------------------------
-- Table structure for `map_adminlog`
-- ----------------------------
DROP TABLE IF EXISTS `map_adminlog`;
CREATE TABLE `map_adminlog` (
  `logid` int(10) NOT NULL AUTO_INCREMENT COMMENT '主键字段增长',
  `adminid` int(5) NOT NULL DEFAULT '0' COMMENT '记录用户ID',
  `adminname` varchar(40) DEFAULT NULL COMMENT '记录用户名',
  `controller_name` varchar(32) NOT NULL DEFAULT '' COMMENT '操作对象',
  `action_name` varchar(32) NOT NULL DEFAULT '' COMMENT '操作描述',
  `url` varchar(128) NOT NULL DEFAULT '' COMMENT '请求的地址',
  `summary` text COMMENT '备注',
  `logtime` int(11) NOT NULL COMMENT '日志时间',
  `logip` char(16) NOT NULL DEFAULT '' COMMENT '日志ip',
  PRIMARY KEY (`logid`),
  KEY `adminid` (`adminid`)
) ENGINE=MyISAM AUTO_INCREMENT=11 DEFAULT CHARSET=utf8 COMMENT='后台日志表';

-- ----------------------------
-- Records of map_adminlog
-- ----------------------------
INSERT INTO map_adminlog VALUES ('10', '0', '0', 'welcome', 'index', 'http://www.map.tmc/admin/', 'GET:array (\n)	POST:array (\n)	USER_AGENT:\'Mozilla/5.0 (Windows NT 5.1) AppleWebKit/537.31 (KHTML, like Gecko) Chrome/26.0.1410.43 Safari/537.31\'', '1365648166', '127.0.0.1');

-- ----------------------------
-- Table structure for `map_category`
-- ----------------------------
DROP TABLE IF EXISTS `map_category`;
CREATE TABLE `map_category` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `cat` tinyint(2) NOT NULL DEFAULT '1' COMMENT '文化信息1,文化传统2',
  `parentid` tinyint(2) NOT NULL COMMENT '父目录分类',
  `childid` tinyint(2) NOT NULL COMMENT '子目录分类',
  `create_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=20 DEFAULT CHARSET=utf8 COMMENT='分类管理';

-- ----------------------------
-- Records of map_category
-- ----------------------------

-- ----------------------------
-- Table structure for `map_content`
-- ----------------------------
DROP TABLE IF EXISTS `map_content`;
CREATE TABLE `map_content` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `addr_name` varchar(30) NOT NULL COMMENT '名称',
  `telephone` varchar(20) NOT NULL COMMENT '电话号码',
  `address` varchar(50) NOT NULL COMMENT '地址',
  `zipcode` varchar(10) NOT NULL COMMENT '邮编',
  `map_url` varchar(200) NOT NULL COMMENT '大图片的URL',
  `web_url` varchar(200) NOT NULL COMMENT '网站URL',
  `lng` decimal(20,5) DEFAULT '0.00000' COMMENT '百度地图的纬度',
  `lat` decimal(20,5) DEFAULT '0.00000' COMMENT '百度地图的经度',
  `cat_id` int(10) NOT NULL COMMENT '对应category具体一类',
  `create_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=20 DEFAULT CHARSET=utf8 COMMENT='管理员信息表';

-- ----------------------------
-- Records of map_content
-- ----------------------------

-- ----------------------------
-- Table structure for `map_logs`
-- ----------------------------
DROP TABLE IF EXISTS `map_logs`;
CREATE TABLE `map_logs` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `userid` varchar(30) NOT NULL COMMENT '登录id',
  `action` varchar(500) NOT NULL COMMENT '进行的操作',
  `create_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=20 DEFAULT CHARSET=utf8 COMMENT='日志信息表';

-- ----------------------------
-- Records of map_logs
-- ----------------------------

-- ----------------------------
-- Table structure for `map_photo`
-- ----------------------------
DROP TABLE IF EXISTS `map_photo`;
CREATE TABLE `map_photo` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `out_id` varchar(30) NOT NULL COMMENT '外部引用id',
  `describe` varchar(300) NOT NULL COMMENT '文字描述',
  `map_url` varchar(200) NOT NULL COMMENT '大图片的URL',
  `create_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=20 DEFAULT CHARSET=utf8 COMMENT='信息管理';

-- ----------------------------
-- Records of map_photo
-- ----------------------------

-- ----------------------------
-- Table structure for `map_user`
-- ----------------------------
DROP TABLE IF EXISTS `map_user`;
CREATE TABLE `map_user` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `email` varchar(255) NOT NULL,
  `password` varchar(64) NOT NULL,
  `username` varchar(255) NOT NULL,
  `phonenum` varchar(15) NOT NULL COMMENT '手机号',
  `create_time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=20 DEFAULT CHARSET=utf8 COMMENT='管理员信息表';

-- ----------------------------
-- Records of map_user
-- ----------------------------
