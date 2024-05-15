# Project_NightFall

Desenvolvido com Unreal Engine 5

## Equipe
- **@Devas666**
- **@Stifz**
- **@FR4NCISDEV**


## Fluxo
Sim, existem vários fluxos de trabalho o projeto usando o Git. Um fluxo de trabalho popular é o Git Flow, que é um padrão de fluxo de trabalho que define um conjunto de ramos (branches) para diferentes propósitos.

No Git Flow, você tem os seguintes ramos:

- Master : O ramo principal do projeto, que contém o código estável e pronto para ser implantado em produção.
- Desenvolvimento: O ramo de desenvolvimento, que contém o código em desenvolvimento e que será implantado em produção na próxima versão.
- Feature: Ramos de recursos, que são criados a partir do ramo de desenvolvimento e contêm o código de um recurso específico. Quando o recurso estiver pronto, ele é mesclado no ramo de desenvolvimento.
- Lançamento: Ramos de versão, que são criados a partir do ramo de desenvolvimento e contêm o código da próxima versão. Quando a versão estiver pronta, ela é mesclada no ramo principal e no ramo de desenvolvimento.
- BugFix: Ramos de correção de bugs, que são criados a partir do ramo principal e contêm o código de uma correção de bug específica. Quando a correção de bug estiver pronta, ela é mesclada no ramo principal e no ramo de desenvolvimento.

## Roles
- Os **desenvolvedores** trabalharão no ramo de desenvolvimento, criando ramos de recursos (feature branches) para cada recurso que estiverem desenvolvendo. Quando um recurso estiver pronto, o desenvolvedor criará uma pull request para mesclar o ramo de recursos no ramo de desenvolvimento. O Git Master revisará a pull request e fará a mesclagem.
- O responsável pela coordenação das atividades e o Git será o **Git Master**, responsável por gerenciar o ramo principal e fazer as implantações em produção. Quando o ramo de desenvolvimento estiver pronto para ser implantado em produção, o Git Master criará um ramo de versão (branch de lançamento) e fará as correções necessárias. Quando a versão estiver pronta, ela será mesclada no ramo principal e no ramo de desenvolvimento. Se houver um bug crítico em produção, o Git Master criará um ramo de correção de bugs (hotfix branch) e fará a correção necessária. Quando a correção de bug estiver pronta, ela será mesclada no ramo principal e no ramo de desenvolvimento.
- O **Product Owner (PO)** em um fluxo de trabalho Git é responsável por definir uma direção clara e gerenciar o backlog de produto. O PO prioriza o trabalho e garante que apenas uma pessoa defina a prioridade, o que é crucial para o sucesso da equipe.
