[![Build Status](https://travis-ci.org/shunding/otus-helloworld.svg?branch=master)](https://travis-ci.org/shunding/otus-helloworld) [ ![Download](https://api.bintray.com/packages/shunding/otus-helloworld/helloworld/images/download.svg) ](https://bintray.com/shunding/otus-helloworld/helloworld/_latestVersion)

# Домашнее задание - Hello, World!

- Сборка и публикация пакета
- Написать программу выводящую на консоль единственную строку.
- Сформировать готовый для установки deb-пакет со скомпилированной программой и выложить его в репозиторий.
- Прислать ссылку на репозиторий в github и ссылку на репозиторий с
пакетом.

## Будет здорово, но не обязательно
Добавить версионность в пакет и сообщение.
Запустить на этапе сборки тесты.

## Может пригодиться
Выложить исходные тексты в репозиторий на github.

Залогиниться на https://travis-ci.org/ и включить для своего репозитория автоматическую сборку.

Залогиниться на https://bintray.com/ (For an Open Source Account и аккаунт github). Создать новый репозиторий - имя произвольное, тип Debian, Default Licenses любая. После создания отредактировать включив GPG sign.

Создать в созданном репозитории новый пакет - имя произвольное,
ссылка на контроль версии может быть указана как - (просто чтобы было
заполнено).

По ссылке https://bintray.com/profile/edit в пункте API Key скопировать
ключ. В настройках репозитория в https://travis-ci.org создать переменную,
например BINTRAY_API_KEY, и в качестве значения API Key. Это
позволит не указывать явно ключ в исходниках.
